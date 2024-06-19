#!/usr/bin/env python3

# Exercise 05-B: Phone Combinations

from typing import Iterator

import sys

# Constants

numbers_to_letters = {
    "2": "abc",
    "3": "def",
    "4": "ghi",
    "5": "jkl",
    "6": "mno",
    "7": "pqrs",
    "8": "tuv",
    "9": "wxyz",
}

# Functions


def phone_combinations(numbers: str, letters: str) -> Iterator[str]:
    # Recursively generate combinations
    if not numbers:
        yield letters
    else:
        for candidate in numbers_to_letters[numbers[0]]:
            yield from phone_combinations(numbers[1:], letters + candidate)


# Main Execution


def main() -> None:
    for numbers in sys.stdin:
        for combination in phone_combinations(numbers.strip(), ""):
            print(combination)


if __name__ == "__main__":
    main()
