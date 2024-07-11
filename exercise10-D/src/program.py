#!/usr/bin/env python3

# Exercise: 10-D: MST


from collections import defaultdict
import heapq
import sys


# Type Aliases

Vertex = str
Graph = dict[Vertex, dict[Vertex, int]]


# Functions


def read_graph(undirected=False) -> Graph:
    graph = defaultdict(dict)

    for source, target, weight in (line.split() for line in sys.stdin):
        weight = int(weight)
        graph[source][target] = weight

        if undirected:
            graph[target][source] = weight

    return graph


def compute_mst(graph: Graph) -> tuple[list[tuple[int, int]], int]:
    mst = []
    sum_ = 0
    start = next(iter(graph.keys()), None)

    if start is not None:
        visited = set()
        frontier = [(0, None, start)]

        while frontier:
            weight, source, target = heapq.heappop(frontier)
            if target not in visited:
                visited.add(target)

                if source is not None:
                    mst.append((source, target))
                    sum_ += weight

                for neighbor, weight in graph[target].items():
                    heapq.heappush(frontier, (weight, target, neighbor))

    return mst, sum_


# Main Execution


def main():
    graph = read_graph(undirected=True)
    mst, sum_ = compute_mst(graph)

    print(sum_)
    mst.sort()
    for source, target in mst:
        print(source, target)


if __name__ == "__main__":
    main()
