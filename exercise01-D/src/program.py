#!/usr/bin/env python3

# Exercise 01-D: Matrix Row Max

import sys
from typing import TextIO

# Functions


def find_matrix_max_row(stream: TextIO, n: int) -> int:
    max_sum, max_row = -sys.maxsize, 0
    for row in range(1, n + 1):
        row_sum = sum(int(i) for i in stream.readline().split())
        if row_sum > max_sum:
            max_sum = row_sum
            max_row = row

    return max_row


# Main Execution


def main() -> None:
    while (n := int(sys.stdin.readline())) != 0:
        print(find_matrix_max_row(sys.stdin, n))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
