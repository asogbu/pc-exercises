#!/usr/bin/env python3

# Exercise 08-B: Squirrel Hunting


import sys


# Type Aliases


Grid = list[list[int]]


# Functions


def read_grid(n: int) -> Grid:
    # Read and pad grid
    grid = [[0] * (n + 1)]
    for _ in range(n):
        grid.append([0] + [int(w) for w in sys.stdin.readline().split()])
    return grid


def hunt_squirrels(grid: Grid, n: int) -> int:
    table = [[0] * (n + 1) for _ in range(n + 1)]

    for r in range(1, n + 1):
        for c in range(1, n + 1):
            table[r][c] = grid[r][c] + max(table[r - 1][c], table[r][c - 1])

    return table[n][n]


# Main execution


def main() -> None:
    for n in (int(w) for w in sys.stdin):
        grid = read_grid(n)
        print(hunt_squirrels(grid, n))


if __name__ == "__main__":
    main()
