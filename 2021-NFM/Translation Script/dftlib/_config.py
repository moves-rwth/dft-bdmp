# Todo: find better place
storm_path = "/Users/mvolk/develop/dft-storm/build/bin/storm-dft"

try:
    import stormpy

    has_stormpy = True
except ImportError:
    has_stormpy = False

if storm_path is None:
    has_storm_dft = False
else:
    has_storm_dft = True
