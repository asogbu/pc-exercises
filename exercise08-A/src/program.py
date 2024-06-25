#!/usr/bin/env python3

# Exercise 08-A: Climbing Stairs

import sys

# Functions


def count_steps(n: int, cache: dict[int, int] = {0: 1, 1: 1}) -> int:
    # Determine number of distinct ways to climb n steps using only
    # increments of 1 or 2 steps at a time.

    if n not in cache:
        cache[n] = count_steps(n - 1, cache) + count_steps(n - 2, cache)

    return cache[n]


# Main Execution


def main() -> None:
    for n in (int(line) for line in sys.stdin):
        print(count_steps(n))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
