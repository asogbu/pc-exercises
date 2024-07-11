#!/usr/bin/env python3

# Exercise 10-B: Bicolorable

import sys
from typing import Optional
from collections import defaultdict

# Type Aliases


Vertex = str
Graph = dict[Vertex, set[Vertex]]
Color = bool


# Constants


BLUE: Color = False
RED: Color = True


# Functions


def read_graph(undirected: bool = False) -> Graph:
    _, m = (int(w) for w in sys.stdin.readline().split())
    graph = defaultdict(set)

    for line in (sys.stdin.readline() for _ in range(m)):
        src, dst = line.split()
        graph[src].add(dst)
        if undirected:
            graph[dst].add(src)

    return graph


def is_bicolorable(graph: Graph) -> bool:
    return walk2(graph, next(iter(graph.keys())))


def walk1(
    graph: Graph,
    origin: Vertex,
    color: Color = BLUE,
    visited: Optional[dict[Vertex, Color]] = None,
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


def walk2(graph: Graph, origin: Vertex) -> bool:
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
        print("BICOLORABLE" if is_bicolorable(graph) else "NOT BICOLORABLE")


if __name__ == "__main__":
    main()
