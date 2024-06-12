// Exercise 04-C: Contiguous Array

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

// Functions

std::vector<bool> read_digits(std::string &s) {
    std::vector<bool> digits;
    std::stringstream ss(s);
    int digit;

    while (ss >> digit) {
        digits.push_back(digit);
    }

    return digits;
}

int find_maximum_contiguous_array(std::vector<bool> &digits) {
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    std::string line;
    while (getline(std::cin, line)) {
        auto digits = read_digits(line);
        auto length = find_maximum_contiguous_array(digits);
        std::cout << length << std::endl;
    }

    return 0;
}
