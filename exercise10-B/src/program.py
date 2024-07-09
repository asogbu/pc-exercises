#!/usr/bin/env python3

# Exercise 10-B: Bicolorable

import sys
from typing import Optional, Any
from collections import defaultdict

# Constants

BLUE = False
RED = True

# Type Aliases

Graph = dict[Any, set]

# Functions


def read_graph(undirected: bool = False) -> Graph:
    """Read graph from standard input"""
    _, m = [int(w) for w in sys.stdin.readline().split()]
    graph: Graph = defaultdict(set)

    for line in (sys.stdin.readline() for _ in range(m)):
        src, dst = [int(w) for w in line.split()]
        graph[src].add(dst)
        if undirected:
            graph[dst].add(src)

    return graph


def is_bicolorable(graph: Graph) -> bool:
    """Determines if graphis bicolorable by walking it recursively."""
    return walk2(graph, next(iter(graph.keys())))


def walk1(
    graph: Graph,
    origin,
    color: bool = BLUE,
    visited: Optional[dict[Any, bool]] = None,
) -> bool:
    """Recursively walk graph and verifying that the node has the appropriate
    color."""

    if visited is None:
        visited = {}

    if origin in visited:
        return color == visited[origin]

    visited[origin] = color

    for neighbor in graph[origin]:
        if not walk1(graph, neighbor, not color, visited):
            return False

    return True


def walk2(graph: Graph, origin) -> bool:
    """Iteratively walk graph and verifying that the node has the appropriate
    color."""
    visited = {}

    stack = [(origin, RED)]

    while stack:
        node, color = stack.pop()

        if node in visited:
            if visited[node] != color:
                return False
        else:
            visited[node] = color
            next_color = not color
            stack.extend((neighbor, next_color) for neighbor in graph[node])

    return True


# Main execution


def main() -> None:
    while graph := read_graph():
        if is_bicolorable(graph):
            print("BICOLORABLE")
        else:
            print("NOT BICOLORABLE")


if __name__ == "__main__":
    main()
