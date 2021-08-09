from dft26262.funcblocks.hw_block import HwBlock


class Partition:
    """
    Partitioning of components onto hardware blocks.
    """

    def __init__(self, json, parameters):
        self.name = json['name']
        parameters.add_parameters(json['parameters'])
        self.default = json['default']
        self.blocks = []
        for block in json['blocks']:
            if block['pattern']['type'] == "default":
                # Use default block template
                default_json = {'name': block['name'], 'pattern': self.default}
                self.blocks.append(HwBlock(default_json, parameters))
            else:
                self.blocks.append(HwBlock(block, parameters))

    def add(self, block_name, component):
        """
        Add component to block.
        :param block_name: Block.
        :param component: Component.
        """
        for block in self.blocks:
            if block.name == block_name:
                block.add(component)
                return
        print("Block '{}' not known.".format(block_name))
        assert False

    def __str__(self):
        return self.name

    def print(self):
        print("Partition '{}':".format(self.name))
        for block in self.blocks:
            print("\t- '{}' ({}):".format(block.name, block.patternType))
            print("\t  " + ", ".join([component.name for component in block.components]))
