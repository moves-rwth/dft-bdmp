import subprocess


def run_tool(args, quiet=False):
    """
    Executes a process,
    :returns: the `stdout`
    """
    pipe = subprocess.Popen(args, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    result = ""
    for line in iter(pipe.stdout.readline, ""):
        if not line and pipe.poll() is not None:
            break
        output = line.decode(encoding='UTF-8').rstrip()
        if output != "":
            if not quiet:
                print("\t * " + output)
            result = output
    return result
