#!/usr/bin/env python3

# Exercise 04-A: Palindromic Permutations

import sys

# Functions


def is_palindromic(s: str) -> bool:
    return len(get_letters_with_odd_counts(s)) <= 1


def get_letters_with_odd_counts(s: str) -> set[int]:
    odds = set()
    for char in s:
        flip_membership(char, odds)

    return odds


def flip_membership(element: any, the_set: set):
    if element in the_set:
        the_set.remove(element)
    else:
        the_set.add(element)


# Main Execution


def main() -> None:
    for word in sys.stdin:
        print("Yes" if is_palindromic(word.strip()) else "No")


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
