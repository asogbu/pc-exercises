// Exercise 01-D: Count Duplicates

#include <limits.h>

#include <iostream>
#include <istream>
#include <sstream>
#include <string>

// Prototypes

int FindMatrixMaxRow(std::istream& stream, int n);

// Main Execution

int main(int argc, char* argv[]) {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        int n;
        ss >> n;

        if (n == 0)
            break;
        std::cout << FindMatrixMaxRow(std::cin, n) << '\n';
    }

    return 0;
}

// Functions

int FindMatrixMaxRow(std::istream& stream, int n) {
    int max_sum = INT_MIN;
    int max_row = 0;

    std::string line;
    for (int row = 1; row <= n; row++) {
        std::getline(stream, line);
        std::stringstream ss(line);

        int row_sum = 0;
        int i;
        while (ss >> i) {
            row_sum += i;
        }

        if (row_sum > max_sum) {
            max_sum = row_sum;
            max_row = row;
        }
    }

    return max_row;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
