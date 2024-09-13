#!/usr/bin/env python3

# Exercise 01-A: Line Totals

import sys


def main():
    for line in sys.stdin:
        print(sum([int(s) for s in line.split()]))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
