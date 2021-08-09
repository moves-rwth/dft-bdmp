def create_from_json(json, parameters):
    """
    Create DFT element from json.
    :param json: Json.
    :param parameters: Parameters.
    :return: DFT element.
    """
    assert json['group'] == "nodes"
    # Parse data from json 
    data = json['data']
    element_id = int(data['id'])
    name = data['name']
    element_type = data['type']
    position = (0,0)

    if element_type == "be" or element_type == "be_exp":
        # BE
        rate = parameters.parse(data['rate'])
        dorm = parameters.parse(data['dorm'])
      #  rate = data['rate']
      #  dorm = data['dorm']
        transient = False
        if data.get('transient'):
            transient = data['transient']
        return DftBe(element_id, name, rate, dorm, transient, position)
    elif element_type == "vot":
        # Voting gate
        threshold = int(data['voting'])
        return DftVotingGate(element_id, name, threshold, [], position)
    elif element_type == "pdep":
        probability = data['probability']
        return DftPDefGate(element_id, name, probability, [], position)
    else:
        # Gate
        return DftGate(element_id, name, element_type, [], position)


class DftElement:
    """
    Class containing a DFT element.
    """

    def __init__(self, element_id, name, element_type, position):
        self.element_id = element_id
        self.name = name
        self.element_type = element_type
        self.position = position
        self.ingoing = []
        self.outgoing = []

    def is_be(self):
        return self.element_type == "be" or self.element_type == "be_exp"

    def is_gate(self):
        return not self.is_be()

    def remove_parent(self, element):
        assert element in self.ingoing
        self.ingoing.remove(element)

    def get_json(self, parameters, instantiate=False):
        data = dict()
        data['id'] = str(self.element_id)
        data['name'] = str(self.name)
        data['type'] = self.element_type
        position = dict()
        position["x"] = self.position[0]
        position["y"] = self.position[1]
        json = {
            "data": data,
            "position": position,
            "group": "nodes"
        }
        return json

    def __str__(self):
        return "{} - '{}' ({})".format(self.element_type, self.name, self.element_id)

    def compare(self, other):
        if self.element_id != other.element_id:
            raise Exception("Ids are not equal: {} and {}".format(self.element_id, other.element_id))
            return False
        if self.element_type != other.element_type:
            raise Exception(
                "Element types are not equal for {}: {} and {}".format(self, self.element_type, other.element_type))
            return False
        list_outgoing = [elem.element_id for elem in other.outgoing]
        for element in self.outgoing:
            if element.element_id in list_outgoing:
                list_outgoing.remove(element.element_id)
            else:
                raise Exception("Element {} is not contained in other for {}.".format(element, self))
                return False
        if len(list_outgoing) > 0:
            raise Exception("Some elements are not contained in {}.".format(self))
            return False

        return True


class DftBe(DftElement):
    def __init__(self, element_id, name, rate, dorm, transient, position):
        DftElement.__init__(self, element_id, name, "be", position)
        assert self.is_be()
        self.rate = rate
        self.dorm = dorm
        self.transient = transient

    def get_json(self, parameters, instantiate=False):
        json = DftElement.get_json(self, parameters, instantiate)
        json['data']['rate'] = parameters.to_str(self.rate, instantiate)
        json['data']['dorm'] = parameters.to_str(self.dorm, instantiate)
        json['data']['transient'] = self.transient
        return json

    def __str__(self):
        s = super().__str__()
        if self.transient:
            s += " (transient)"
        s += " with rate {}".format(self.rate)
        if self.dorm != "1" and self.dorm != "1.0":
            s += " ({})".format(self.dorm)
        return s

    def compare(self, other):
        if not super(DftBe, self).compare(other):
            return False
        if self.rate != other.rate:
            raise Exception("Rates are different {} and {} for {}".format(self.rate, other.rate, self))
            return False
        if self.dorm != other.dorm:
            raise Exception("Dormancy factors are different {} and {} for {}".format(self.dorm, other.dorm, self))
            return False
        if self.transient != other.transient:
            raise Exception(
                "Transient flag is different {} and {} for {}".format(self.transient, other.transient, self))
            return False

        return True


class DftGate(DftElement):
    def __init__(self, element_id, name, element_type, children, position):
        DftElement.__init__(self, element_id, name, element_type, position)
        assert self.is_gate()
        for child in children:
            self.add_child(child)

    def add_child(self, element):
        self.outgoing.append(element)
        element.ingoing.append(self)

    def remove_child(self, element):
        assert element in self.outgoing
        self.outgoing.remove(element)
        element.remove_parent(self)

    def get_json(self, parameters, instantiate=False):
        json = DftElement.get_json(self, parameters, instantiate)
        json['data']['children'] = [str(child.element_id) for child in self.outgoing]
        return json

    def __str__(self):
        return super().__str__() + " with children: " + ", ".join([str(child.name) for child in self.outgoing])


class DftVotingGate(DftGate):
    def __init__(self, element_id, name, voting_threshold, children, position):
        DftGate.__init__(self, element_id, name, "vot", children, position)
        self.votingThreshold = voting_threshold

    def get_json(self, parameters, instantiate=False):
        json = DftGate.get_json(self, parameters, instantiate)
        json['data']['voting'] = str(self.votingThreshold)
        return json

    def __str__(self):
        return super().__str__() + ", threshold: {}".format(self.votingThreshold)

    def compare(self, other):
        if not super(DftVotingGate, self).compare(other):
            return False
        if self.votingThreshold != other.votingThreshold:
            raise Exception(
                "Threshold are different {} and {} for {}".format(self.votingThreshold, other.votingThreshold, self))
            return False

        return True

class DftPDefGate(DftGate):
    def __init__(self, element_id, name, probability, children, position):
        DftGate.__init__(self, element_id, name, "pdep", children, position)
        self.probability = probability

    def get_json(self, parameters, instantiate=False):
        json = DftGate.get_json(self, parameters, instantiate)
        json['data']['probability'] = str(self.probability)
        return json

    def __str__(self):
        return super().__str__() + ", probability: {}".format(self.probability)

    def compare(self, other):
        if not super(DftPDefGate, self).compare(other):
            return False
        if self.probability != other.probability:
            raise Exception(
                "probability are different {} and {} for {}".format(self.probability, other.probability, self))
            return False

        return True
