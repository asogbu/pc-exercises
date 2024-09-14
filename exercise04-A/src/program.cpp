// Exercise 04-A: Palindromic Permutations

#include <iostream>
#include <string>
#include <unordered_set>

// Prototypes

bool IsPalindromic(const std::string& s);
void GetLettersWithOddCounts(const std::string& s, std::unordered_set<char>& odds);
void FlipMembership(char c, std::unordered_set<char>& s);

// Main execution

int main(int argc, char* argv[]) {
    std::string word;

    while (std::cin >> word)
        std::cout << (IsPalindromic(word) ? "Yes" : "No") << '\n';

    return 0;
}

// Functions

bool IsPalindromic(const std::string& s) {
    std::unordered_set<char> odds;
    GetLettersWithOddCounts(s, odds);
    return odds.size() <= 1;
}

void GetLettersWithOddCounts(const std::string& s, std::unordered_set<char>& odds) {
    for (char c : s) FlipMembership(c, odds);
}

void FlipMembership(char c, std::unordered_set<char>& s) {
    if (!s.insert(c).second) s.erase(c);
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
