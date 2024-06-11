#!/usr/bin/env swift

// Exercise 01-A: Line Totals

while let line: String = readLine() {
    print(line.split(separator: " ").map{Int($0) ?? 0}.reduce(0, +))
}
