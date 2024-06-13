#!/usr/bin/env python3

# Exercise 03-A: Perfect Square

import sys

# Functions


def is_perfect_square(n: int) -> bool:
    # Use binary search to determine if n is a perfect valid square
    candidates = range(1, n + 1)
    return binary_search_modif(candidates, n, lambda x: x**2) != -1


def binary_search_modif(l: list, target, modif: callable = None) -> int:
    """
    Performs a binary search of target in a sorted list applying the given
    modifying function before comparing while searching.

    If no modifying function is passed, the elements in the list are compared
    directly as they are.

    Returns:
        int: If target is found, the index of some occurrence of target.
             Otherwise, -1 is returned.
    """
    left = 0
    right = len(l) - 1

    while left <= right:
        middle = (left + right) // 2
        midpoint = modif(l[middle]) if modif else l[middle]
        if target == midpoint:
            return middle
        elif target < midpoint:
            right = middle - 1
        else:
            left = middle + 1

    return -1


# Main Execution


def main():
    for n in (int(i) for i in sys.stdin):
        print("Yes" if is_perfect_square(n) else "No")


if __name__ == "__main__":
    main()
