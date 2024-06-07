#!/usr/bin/env python3

"""
Exercise 01-A: Line Totals
"""

import sys


def main():
    for line in sys.stdin:
        print(sum(map(int, line.split())))


if __name__ == "__main__":
    main()
