#!/usr/bin/env python3

# Exercise 03-B: Largest Number

import functools
import sys

# Functions


def compare_numbers(a: str, b: str) -> bool:
    # TODO: Compare a and b
    return False


# Main execution


def main():
    sort_key = functools.cmp_to_key(compare_numbers)
    # TODO: Read numbers, sort, and print


if __name__ == "__main__":
    main()
