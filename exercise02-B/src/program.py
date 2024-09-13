#!/usr/bin/env python3

# Exercise 02-B: PBB-matched

import sys

# Constants

MATCHING = {")": "(", "]": "[", "}": "{"}

# Functions


def is_pbbmatched(s: str) -> bool:
    stack = []
    for symbol in s:
        if symbol in MATCHING.keys():
            if len(stack) == 0:
                return False

            top = stack.pop()
            if top != MATCHING[symbol]:
                return False
        else:
            stack.append(symbol)

    return not stack


# Main execution


def main():
    for line in sys.stdin:
        line = line.strip()
        result = "Yes" if is_pbbmatched(line) else "No"
        print("{:>10}: {}".format(line, result))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
