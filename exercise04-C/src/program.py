#!/usr/bin/env python3

# Exercise 04-C: Contiguous Array

import sys

# Functions


def find_maximum_contiguous_array(array: list[int]) -> int:
    max_length = 0

    levels = {0: 0}
    curr_level = 0
    for index, digit in enumerate(array, 1):
        curr_level += 1 if digit == 1 else -1
        if curr_level in levels:
            curr_length = index - levels[curr_level]
            max_length = curr_length if curr_length > max_length else max_length
        else:
            levels[curr_level] = index

    return max_length


# Main execution


def main() -> None:
    for line in sys.stdin:
        digits = [int(w) for w in line.split()]
        print(find_maximum_contiguous_array(digits))


if __name__ == "__main__":
    main()
