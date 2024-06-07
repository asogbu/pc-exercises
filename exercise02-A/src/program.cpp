// Exercise 04-A: Anagrams

#include <iostream>
#include <vector>

// Constants

const size_t NLETTERS = 26;

// Functions

bool is_anagram(std::string &s, std::string &t) {
    // TODO: Return whether or not s and t are anagrams
    return false;
}

// Main execution

int main(int argc, char *argv[]) {
    std::string first, second;

    while (std::cin >> first >> second) {
        std::cout << (is_anagram(first, second) ? "Anagram" : "Not Anagram") << std::endl;
    }

    return 0;
}