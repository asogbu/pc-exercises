#!/usr/bin/env python3

# Exercise 01-B: Fixed Totals

import sys


def main():
    while n := int(sys.stdin.readline()):
        print(sum(int(sys.stdin.readline()) for _ in range(n)))


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
