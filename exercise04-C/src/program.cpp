// Exercise 04-C: Contiguous Array

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

// Prototypes

std::vector<bool> ReadDigits(const std::string &s);

// Finds the maximum length of a contiguous subarray with equal numbers of 0s and 1s
size_t FindMaximumContiguousArray(const std::vector<bool> &digits);

// Main execution

int main(int argc, char *argv[]) {
    std::string line;
    while (getline(std::cin, line)) {
        std::vector<bool> digits = ReadDigits(line);
        std::cout << FindMaximumContiguousArray(digits) << '\n';
    }

    return 0;
}

// Functions

std::vector<bool> ReadDigits(const std::string &s) {
    std::vector<bool> digits;
    std::stringstream input(s);

    int digit;
    while (input >> digit) {
        digits.push_back(digit);
    }

    return digits;
}

size_t FindMaximumContiguousArray(const std::vector<bool> &digits) {
    size_t max_length = 0;

    std::unordered_map<int, size_t> levels = {{0, 0}};
    int curr_level = 0;
    for (size_t i = 1; i <= digits.size(); i++) {
        curr_level += (digits[i - 1] == 1) ? 1 : -1;

        // Check if this balance has been seen before
        if (levels.find(curr_level) != levels.end()) {
            // Calculate the length of the subarray with equal 0s and 1s
            size_t curr_length = i - levels[curr_level];
            max_length = std::max(curr_length, max_length);
        } else {
            // Store the first occurrence of this balance
            levels[curr_level] = i;
        }
    }

    return max_length;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
