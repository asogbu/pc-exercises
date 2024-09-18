#!/usr/bin/env python3

# Exercise 03-B: Largest Number

import functools
import sys

# Functions


def compare_numbers(a: str, b: str) -> int:
    ab = a + b
    ba = b + a

    return 0 if ab == ba else -1 if ab < ba else 1


# Main execution


def main():
    sort_key = functools.cmp_to_key(compare_numbers)
    while words := sys.stdin.readline().split():
        print("".join(sorted(words, key=sort_key, reverse=True)))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
