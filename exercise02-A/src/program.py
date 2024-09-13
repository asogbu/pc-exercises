#!/usr/bin/env python3

# Exercise 02-A: Anagrams

import sys


# Functions
def is_anagram(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False

    letter_counter_s = [0] * (ord("Z") - ord("A") + 1)
    letter_counter_t = [0] * (ord("Z") - ord("A") + 1)
    for char_s, char_t in zip(s, t):
        letter_counter_s[get_letter_index(char_s)] += 1
        letter_counter_t[get_letter_index(char_t)] += 1

    return letter_counter_s == letter_counter_t


def get_letter_index(c: str) -> int:
    return ord(c.upper()) - ord("A")


# Main Execution
def main():
    for line in sys.stdin:
        first, second = line.strip().split()
        print("Anagram" if is_anagram(first, second) else "Not Anagram")


if __name__ == "__main__":
    main()

# vim: set sts=4 sw=4 ts=8 expandtab ft=python:
