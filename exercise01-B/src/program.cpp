// Exercise 01-B: Fixed Totals

#include <iostream>
#include <sstream>
#include <string>

// Prototypes

int SumSeries(int n);

// Main Execution

int main(int argc, char *argv[]) {
    std::string line;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        int n;
        ss >> n;
        if (n == 0) break;

        std::cout << SumSeries(n) << '\n';
    }

    return 0;
}

// Functions

int SumSeries(int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        std::string line;
        std::getline(std::cin, line);
        std::stringstream ss(line);
        int j;
        ss >> j;
        sum += j;
    }

    return sum;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
