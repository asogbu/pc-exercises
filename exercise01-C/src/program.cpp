// Exercise 01-C: Count Duplicates

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[]) {
    int duplicates = 0;
    std::unordered_set<int> seen_numbers;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        int n;
        ss >> n;

        if (seen_numbers.find(n) != seen_numbers.end()) {
            duplicates++;
        } else {
            seen_numbers.insert(n);
        }
    }

    std::cout << duplicates << '\n';

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
