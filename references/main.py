import json
import sys

from cpu import CPU


if __name__ == "__main__":
    cpu = CPU()
    cpu.load_program(sys.stdin.read())
    history = []

    for state in cpu.run():
        history.append(state)

    sys.stdout.write(json.dumps(history))
