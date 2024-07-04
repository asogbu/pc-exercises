#!/usr/bin/env python3

# Exercise 09-D: Invert Binary Tree

from collections import deque
from dataclasses import dataclass
from typing import Optional, Iterator
import sys

# Classes


@dataclass
class Node:
    value: int
    left: Optional["Node"] = None
    right: Optional["Node"] = None


# Functions


def read_tree(values: list[int], index: int = 0) -> Optional[Node]:
    # Use divide and conquer to parse tree
    if index >= len(values):
        return None

    root = Node(
        values[index],
        read_tree(values, 2 * index + 1),
        read_tree(values, 2 * index + 2),
    )

    return root


def walk_tree(root: Optional[Node]) -> Iterator[int]:
    # Use BFS Traversal with Queue to create list of values
    queue = deque([root])
    while queue:
        if node := queue.pop():
            yield node.value
            queue.appendleft(node.left)
            queue.appendleft(node.right)


def dump_tree(root: Optional[Node]) -> None:
    print(",".join(str(n) for n in walk_tree(root)))


def invert_tree(root: Optional[Node]) -> None:
    # Use divide and conquer to invert binary tree
    # Base Case: Invalid Node
    # Divide and Conquer: Swap left and right and recurse
    if root:
        invert_tree(root.left)
        invert_tree(root.right)
        root.left, root.right = root.right, root.left


# Main Execution


def main() -> None:
    for line in sys.stdin:
        values = [int(w) for w in line.split()]
        tree = read_tree(values)
        invert_tree(tree)
        dump_tree(tree)


if __name__ == "__main__":
    main()
