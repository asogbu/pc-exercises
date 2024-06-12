// Exercise 04-B: Happy Number

#include <iostream>
#include <numeric>
#include <unordered_map>
#include <unordered_set>

// Global variables

std::unordered_map<int, bool> IsHappy;

// Functions

bool is_happy_r(int n, std::unordered_set<int> &seen) {
    return false;
}

bool is_happy(int n) {
    return false;
}

// Main execution

int main(int argc, char *argv[]) {
    int n;

    while (std::cin >> n) {
        std::cout << (is_happy(n) ? "Yes" : "No") << std::endl;
    }

    return 0;
}
