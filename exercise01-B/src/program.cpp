// Exercise 01-B: Fixed Totals

#include <iostream>
#include <istream>
#include <string>

// Prototypes

int SumSeries(std::istream& input, int n);

// Main Execution

int main(int argc, char* argv[]) {
    int n;
    while (std::cin >> n && n != 0)
        std::cout << SumSeries(std::cin, n) << '\n';

    return 0;
}

// Functions

int SumSeries(std::istream& input, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int j;
        input >> j;
        sum += j;
    }

    return sum;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
