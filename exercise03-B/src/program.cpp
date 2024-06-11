// Exercise 03-B: Largest Number

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// Functions

bool read_numbers(std::vector<std::string> &numbers) {
    numbers.clear();

    std::string line;
    if (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string n;
        while (ss >> n) {
            numbers.push_back(n);
        }
    }

    return numbers.size();
}

// Main Execution

int main(int argc, char *argv[]) {
    std::vector<std::string> numbers;

    // TODO: Read numbers, sort, and print

    return 0;
}
