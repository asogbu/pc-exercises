#!/usr/bin/env python3

# Exercise 01-C: Count Duplicates

import sys


def main():
    duplicates = 0
    seen_numbers = set()

    for line in sys.stdin:
        if (n := int(line)) in seen_numbers:
            duplicates += 1
        else:
            seen_numbers.add(n)

    print(duplicates)


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
