// Exercise 04-A: Palindromic Permutations

#include <iostream>
#include <string>
#include <unordered_set>

// Functions

bool is_palindromic(std::string &s) {
    return false;
}

// Main execution

int main(int argc, char *argv[]) {
    std::string word;

    while (std::cin >> word) {
        std::cout << (is_palindromic(word) ? "Yes" : "No") << std::endl;
    }

    return 0;
}
