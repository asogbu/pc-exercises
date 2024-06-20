#!/usr/bin/env python3

# Exercise 06-A: Subsets

import sys

# Function


def divisible_subsets(n: int) -> int:
    # Determine how many subsets of {0...9} are divisible by N

    counter = 0
    for subset in range(1 << 10):
        subset_sum = sum([i if subset & (1 << i) else 0 for i in range(10)])
        if subset_sum % n == 0:
            counter += 1

    return counter


# Main execution


def main() -> None:
    for n in map(int, sys.stdin):
        print(divisible_subsets(n))


if __name__ == "__main__":
    main()
