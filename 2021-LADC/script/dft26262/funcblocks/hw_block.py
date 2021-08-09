from dft26262.dft import dft_element_pattern


class HwBlock:
    """
    Hardware block.
    """

    def __init__(self, json, parameters):
        self.name = json['name']
        self.pattern_json = json['pattern']
        self.pattern_type = self.pattern_json['type']
        self.components = []
        self.parameters = parameters

    def add(self, component):
        """
        Add component to block.
        :param component: Component.
        """
        self.components.append(component)

    def create_pattern(self, dft, position):
        """
        Create DFT according to pattern.
        :param dft: DFT to create pattern into.
        :param position: Position for placement.
        :return: Updated DFT.
        """
        if self.pattern_type == "single_be":
            # Single BE
            rate = self.parameters.parse(self.pattern_json['rate'])
            return dft_element_pattern.create_single_be(dft, self.name, rate, position)
        elif self.pattern_type == "covered_fault":
            # Covered fault
            rate = self.parameters.parse(self.pattern_json['rate'])
            coverage = self.parameters.parse(self.pattern_json['coverage'])
            safety_rate = self.parameters.parse(self.pattern_json['safety_rate'])
            return dft_element_pattern.create_covered_fault(dft, self.name, rate, coverage, safety_rate, position)
        elif self.pattern_type == "transient_permanent":
            # Transient and permanent faults
            rate_transient = self.parameters.parse(self.pattern_json['rate_transient'])
            coverage_transient = self.parameters.parse(self.pattern_json['coverage_transient'])
            safety_rate_transient = self.parameters.parse(self.pattern_json['safety_rate_transient'])
            rate_permanent = self.parameters.parse(self.pattern_json['rate_permanent'])
            coverage_permanent = self.parameters.parse(self.pattern_json['coverage_permanent'])
            safety_rate_permanent = self.parameters.parse(self.pattern_json['safety_rate_permanent'])
            return dft_element_pattern.create_transient_permanent_fault(dft, self.name, rate_transient,
                                                                        coverage_transient, safety_rate_transient,
                                                                        rate_permanent, coverage_permanent,
                                                                        safety_rate_permanent, position)
        else:
            raise Exception("Pattern {} not known.".format(self.pattern_type))

    def __str__(self):
        return self.name
