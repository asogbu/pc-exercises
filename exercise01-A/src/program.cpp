// Exercise 01-A: Line Totals

#include <iostream>
#include <sstream>
#include <string>

// Prototypes

int GetStringSum(const std::string& s);

// Main Execution

int main(int argc, char* argv[]) {
    std::string line;

    while (std::getline(std::cin, line))
        std::cout << GetStringSum(line) << '\n';

    return 0;
}

// Functions

int GetStringSum(const std::string& s) {
    int sum = 0;

    std::istringstream input(s);
    int n;
    while (input >> n) {
        sum += n;
    }

    return sum;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
