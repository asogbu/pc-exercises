#!/usr/bin/env python3

# Exercise 02-B: PBB-matched

import sys

# Functions

# LEFT_PBB  = ('(', '[', '{')
# RIGHT_PBB = (')', ']', '}')
MATCHING = {")": "(", "]": "[", "}": "{"}


def is_pbbmatched(s: str) -> bool:
    # TODO: Process string s using a stack to determine if the symbols are balanced
    stack = []
    # print(')' in MATCHING.keys())
    for symbol in s:
        # print(symbol)
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
        line = line.rstrip()
        result = "Yes" if is_pbbmatched(line) else "No"
        print("{:>10}: {}".format(line, result))


if __name__ == "__main__":
    main()
