// Exercise 01-B: Fixed Totals

#include <iostream>
#include <istream>
#include <string>

// Prototypes

int SumSeries(std::istream& stream, int n);

// Main Execution

int main(int argc, char* argv[]) {
    std::string line;

    while (std::getline(std::cin, line)) {
        int n = std::stoi(line);
        if (n == 0) break;

        std::cout << SumSeries(std::cin, n) << '\n';
    }

    return 0;
}

// Functions

int SumSeries(std::istream& stream, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        std::string line;
        std::getline(stream, line);
        sum += std::stoi(line);
    }

    return sum;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
