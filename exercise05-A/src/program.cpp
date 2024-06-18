// Exercise 05-A: Lotto

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// Constants

const int LOTTO_NUMBERS = 6;

// Functions

void display_combinations(std::vector<int> &s, std::vector<int> &d, size_t k) {
    // TODO: Recursively display combinations

    // Base: have complete subset

    // Recurse: with current

    // Recurse: skip current
}

// Main execution

int main(int argc, char *argv[]) {
    std::string line;
    for (size_t line_count = 0; std::getline(std::cin, line); line_count++) {
        std::stringstream ss(line);
        int k;
        ss >> k;
        if (!k) {
            break;
        }

        int n;
        std::vector<int> numbers;
        std::vector<int> combination;
        while (ss >> n) {
            numbers.push_back(n);
        }

        sort(numbers.begin(), numbers.end());

        if (line_count) {
            std::cout << std::endl;
        }

        display_combinations(combination, numbers, 0);
    }

    return 0;
}
