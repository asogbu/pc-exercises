#!/usr/bin/env python3

"""
Exercise 01-B: Fixed Totals
"""

import sys


def main():
    # n = int(sys.stdin.readline())
    # while n > 0:
    #     sum = 0
    #     for _ in range(n):
    #         sum += int(sys.stdin.readline())
    #     print(sum)
    #     n = int(sys.stdin.readline())

    while n := int(sys.stdin.readline()):
        print(sum(int(sys.stdin.readline()) for _ in range(n)))


if __name__ == "__main__":
    main()
