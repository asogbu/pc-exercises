// Exercise 01-D: Count Duplicates

#include <iostream>
#include <istream>
#include <limits>

// Prototypes

int FindMatrixMaxRow(std::istream& input, int n);

// Main Execution

int main(int argc, char* argv[]) {
    int n;
    while (std::cin >> n && n != 0)
        std::cout << 1 + FindMatrixMaxRow(std::cin, n) << '\n';

    return 0;
}

// Functions

int FindMatrixMaxRow(std::istream& input, int n) {
    int max_sum = std::numeric_limits<int>::min();
    int max_row = 0;

    for (int row = 0; row < n; row++) {
        int row_sum = 0;
        for (int col = 0; col < n; col++) {
            int i;
            input >> i;
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
