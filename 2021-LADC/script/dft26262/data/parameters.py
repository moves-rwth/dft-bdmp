import re

import pycarl

import pycarl.gmp

import pycarl.gmp.parse

import pycarl.parse


def get_one():
    return pycarl.gmp.Polynomial(pycarl.gmp.Rational(1))
#Falak: add a new function to get 0
def get_zero():
    return pycarl.gmp.Polynomial(pycarl.gmp.Rational(0))


class Parameters:
    """
    Class containing all parameters.
    """

    def __init__(self, json=""):
        self.parameters = {}
        self.evaluation = {}
        if json != "":
            self.add_parameters(json)

    def add_parameter(self, name, value):
        print("Adding (name, value) = ({0}, {1}".format(name, value))
        assert name not in self.parameters
        var = pycarl.Variable(name)
        self.parameters[name] = (var, float(value))
        self.evaluation[var] = pycarl.gmp.Rational(value)

    def add_parameters(self, json):
        for param, value in json.items():
            self.add_parameter(param, value)

    def change_evaluation(self, name, new_value):
        assert name in self.parameters
        (var, val) = self.parameters[name]
        assert var in self.evaluation
        self.parameters[name] = (var, new_value)
        self.evaluation[var] = pycarl.gmp.Rational(new_value)

    def get_json(self):
        json = {}
        for param, (_, value) in self.parameters.items():
            json[param] = value
        return json

    def parse(self, expr):
        # First try parsing as float
        try:
            num = float(expr)
            parsed = pycarl.gmp.Rational(num)
        except ValueError:
            # match = re.search(r"(.*)\s*/\s*(\d+)$", str(expr))
            # if match:
            #    parsed = pycarl.parse.deserialize(match.group(1), pycarl.gmp)
            #    parsed2 = pycarl.parse.deserialize(match.group(2), pycarl.gmp)
            #    return pycarl.gmp.RationalFunction(parsed) / parsed2
            # else:
            # return float(expr)
            parsed = pycarl.parse.deserialize(expr, pycarl.gmp)

        return pycarl.gmp.Polynomial(parsed)

    def to_str(self, value, instantiate=False):
        if instantiate and self.parameters:
            if type(value) is not pycarl.gmp.Polynomial:
                value = pycarl.gmp.Polynomial(value)
            str_val = float(value.evaluate(self.evaluation))
            return str(str_val)
        else:
            return value.to_smt2()

    def __str__(self):
        return "{} parameters".format(len(self.parameters))

    def verbose_str(self):
        return "{}:\n".format(self) + "\n".join(
            ["\t{} = {}".format(param, value) for (param, (var, value)) in self.parameters.items()])
