#!/usr/bin/env python3

# Exercise: 10-D: MST


from collections import defaultdict
from collections.abc import Iterator
import heapq
import sys
from typing import Any


# Type Aliases


Graph = dict[Any, dict[Any, int]]
Edge = tuple[Any, Any, int]


# Functions


def read_graph(undirected=False) -> Graph:
    graph: Graph = defaultdict(dict)

    for source, target, weight in (line.split() for line in sys.stdin):
        weight = int(weight)
        graph[source][target] = weight

        if undirected:
            graph[target][source] = weight

    return graph


def compute_mst(graph: Graph) -> Iterator[Edge]:
    visited = set()
    if (start := next(iter(graph.keys()), None)) is None:
        return
    frontier = [(0, None, start)]

    while frontier:
        weight, source, target = heapq.heappop(frontier)

        if target in visited:
            continue
        visited.add(target)

        if source is not None:
            yield source, target, weight

        for neighbor, weight in graph[target].items():
            heapq.heappush(frontier, (weight, target, neighbor))


# Main Execution


def main():
    graph = read_graph(undirected=True)
    mst = list(compute_mst(graph))
    mst.sort()

    print(sum(weight for _, _, weight in mst))
    for source, target, _ in mst:
        print(source, target)


if __name__ == "__main__":
    main()
