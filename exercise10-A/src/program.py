#!/usr/bin/env python3

from collections import defaultdict, deque
import sys
from typing import Optional

# Types

Graph = dict[int, set]

# Functions


def read_graph(undirected: Optional[bool] = False) -> Graph:
    """Read graph from standard input"""
    graph: Graph = defaultdict(set)
    for src, dst in (line.split() for line in sys.stdin):
        graph[int(src)].add(int(dst))
        if undirected:
            graph[int(dst)].add(int(src))

    return graph


def walk_graph_dfs_rec(graph: Graph, v, visited: Optional[set] = None) -> None:
    """Walk graph using DFS (recursive)

    Args:
        graph:      Adjacency list of graph we are traversing
        v:          Vertex to visit
        visited:    Vertices we have already processed
    """

    if visited is None:
        visited = set()

    # Base case: Already been visited
    if v in visited:
        return

    # Recursive: process vertex, visit neighbors
    visited.add(v)
    print(v)
    for neighbor in graph[v]:
        walk_graph_dfs_rec(graph, neighbor, visited)


def walk_graph_dfs_iter(graph: Graph, v) -> None:
    """Walk graph using DFS (iterative)"""
    visited = set()
    stack = [v]
    while stack:
        node = stack.pop()
        if node in visited:
            continue

        visited.add(node)
        print(node)
        stack.extend(graph[node])


def walk_graph_bfs_iter(graph: Graph, v) -> None:
    """Walk graph using BFS (iterative)"""
    visited = set()
    queue = deque([v])
    while queue:
        node = queue.pop()
        if node in visited:
            continue

        visited.add(node)
        print(node)
        queue.extendleft(graph[node])


def walk_graph(graph: Graph, root, walk: int):
    if walk == 0:
        walk_graph_dfs_rec(graph, root, set())
    elif walk == 1:
        walk_graph_dfs_iter(graph, root)
    elif walk == 2:
        walk_graph_bfs_iter(graph, root)
    else:
        print(f"Unknown WalkType: {walk}", file=sys.stderr)


# Main Execution


def main():
    if len(sys.argv) != 3:
        print(
            f"Usage: {sys.argv[0]} root [0 = DFS_REC | 1 = DFS_ITER | 2 = BFS_ITER]",
            file=sys.stderr,
        )
        return 1

    root = int(sys.argv[1])
    walk = int(sys.argv[2])
    graph = read_graph()

    walk_graph(graph, root, walk)


if __name__ == "__main__":
    main()
