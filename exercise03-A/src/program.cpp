// Exercise 03-A: Perfect Valid Square

#include <functional>
#include <iostream>
#include <string>

// Prototypes

bool IsPerfectSquare(long n);

// Performs a binary search in the range [start, end] looking for an element such
// that modif(element) == target.
//
// Returns:
//     If the required element is found, the index of one of its occurrences.
//     Otherwise, -1.
int BinarySearchRangeModif(
    long start, long end, const long target,
    long (*modif)(long) = [](long x) { return x; });

// Main Execution

int main(int argc, char* argv[]) {
    std::string line;
    while (std::getline(std::cin, line))
        std::cout << (IsPerfectSquare(std::stol(line)) ? "Yes" : "No") << '\n';

    return 0;
}

// Functions

bool IsPerfectSquare(long n) {
    long (*SquareLong)(long) = [](long x) -> long { return x * x; };
    return BinarySearchRangeModif(1, n, n, SquareLong) != -1;
}

int BinarySearchRangeModif(long start, long end, const long target, long (*modif)(long)) {
    while (start <= end) {
        long middle = (start + end) / 2;
        long midpoint = modif(middle);
        if (target == midpoint) return middle;
        if (target < midpoint) {
            end = middle - 1;
        } else {
            start = middle + 1;
        }
    }

    return -1;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
