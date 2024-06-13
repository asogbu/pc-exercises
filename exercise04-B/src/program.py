#!/usr/bin/env python3

# Exercise 04-B: Happy Number

import sys

# Function


def is_happy_cached(n: int, cache: dict[int, bool]) -> bool:
    seen = set()
    happiness = None
    while n not in seen:
        if n in cache:
            happiness = cache[n]
            break

        seen.add(n)
        n = sum([x * x for x in [int(char) for char in str(n)]])

    if happiness is None:
        happiness = n == 1

    for s in seen:
        cache[s] = happiness

    return happiness


# Main execution


def main() -> None:
    cache = {}  # Memoization: keep track of numbers with known happiness
    for n in (int(line) for line in sys.stdin):
        print("Yes" if is_happy_cached(n, cache) else "No")


if __name__ == "__main__":
    main()
