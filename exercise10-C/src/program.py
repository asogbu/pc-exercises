#!/usr/bin/env python3

# Exercise 10-C: SSSP

from collections import defaultdict, deque
import heapq
import sys

# Type Aliases

Vertex = str
Graph = dict[Vertex, dict[Vertex, int]]
Visited = dict[Vertex, Vertex]

# Build Graph


def read_graph(undirected=False) -> Graph:
    graph = defaultdict(dict)

    for source, target, weight in (line.split() for line in sys.stdin):
        weight = int(weight)
        graph[source][target] = weight

        if undirected:
            graph[target][source] = weight

    return graph


# Compute SSSP


def compute_sssp(graph: Graph, start: Vertex) -> Visited:
    """Compute the single-source shortest path"""
    frontier = [(0, None, start)]
    visited: Visited = {}

    while frontier:
        distance, source, target = heapq.heappop(frontier)

        if target not in visited:
            visited[target] = source

            for neighbor, weight in graph[target].items():
                heapq.heappush(frontier, (distance + weight, target, neighbor))

    return visited


def get_path(sssp_prev_vertex: Visited, source: Vertex, target: Vertex) -> list[Vertex]:
    path = deque()
    curr = target

    while curr != source:
        path.appendleft(curr)
        curr = sssp_prev_vertex[curr]
    path.appendleft(source)

    return path


# Main Execution


def main() -> None:
    graph = read_graph()

    start = "A"
    sssp_prev_vertex = compute_sssp(graph, start)

    for vertex in graph.keys():
        if vertex != start:
            print(
                f"{start} -> {vertex} = {' '.join(get_path(sssp_prev_vertex, start, vertex))}"
            )


if __name__ == "__main__":
    main()
