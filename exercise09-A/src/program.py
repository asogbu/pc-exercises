#!/usr/bin/env python3

# Exercise 09-A: Traversal

from dataclasses import dataclass
from collections import deque

# Node structure


@dataclass
class Node:
    value: str
    left: "Node" = None
    right: "Node" = None


# Pre-defined Trees

AlgorithmTree = Node(
    "A",
    Node("L", Node("O", Node("H"), Node("M")), Node("R")),
    Node("G", Node("I"), Node("T")),
)

# Traversal: BFS (Iterative)


def bfs(root: Node) -> None:
    queue = deque([root])
    while queue:
        if node := queue.pop():
            print(f" {node.value}", end="")
            queue.appendleft(node.left)
            queue.appendleft(node.right)


# Traversal: DFS (Iterative)


def dfs(root: Node) -> None:
    stack = [root]
    while stack:
        if node := stack.pop():
            print(f" {node.value}", end="")
            stack.append(node.right)
            stack.append(node.left)


# Traversal: DFS (Recursive)


def dfs_recursive(root: Node) -> None:
    if root:
        print(" " + root.value, end="")
        dfs_recursive(root.left)
        dfs_recursive(root.right)


# Main Execution


def main():
    print(f"BFS:", end="")
    bfs(AlgorithmTree)
    print()
    print(f"DFS:", end="")
    dfs(AlgorithmTree)
    print()
    print(f"DFS:", end="")
    dfs_recursive(AlgorithmTree)
    print()


if __name__ == "__main__":
    main()
