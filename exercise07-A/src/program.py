#!/usr/bin/env python3

# Exercise 07-A: Cookies

import sys

# Functions


def readline() -> list[int]:
    # Read a line from stdin
    return [int(i) for i in sys.stdin.readline().split()]


def feed_children(children: list[int], cookies: list[int]) -> int:
    # Return number of children fed with cookies
    children.sort(reverse=True)
    cookies.sort()

    content_children = 0
    for child in children:
        if cookies[-1] >= child:
            cookies.pop()
            content_children += 1

    return content_children


# Main execution


def main() -> None:
    while (children := readline()) and (cookies := readline()):
        print(feed_children(children, cookies))


if __name__ == "__main__":
    main()
