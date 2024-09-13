// Exercise 02-A: Anagrams

#include <array>
#include <cctype>
#include <iostream>
#include <string>

// Constants

constexpr size_t kNumLetters = 'Z' - 'A' + 1;

// Prototypes

int GetLetterIndex(char c);
bool IsAnagram(const std::string &s, const std::string &t);

// Main execution

int main(int argc, char *argv[]) {
    std::string first, second;

    while (std::cin >> first >> second) {
        std::cout << (IsAnagram(first, second) ? "Anagram" : "Not Anagram") << '\n';
    }

    return 0;
}

// Functions

int GetLetterIndex(char c) {
    return std::toupper(c) - 'A';
}

bool IsAnagram(const std::string &s, const std::string &t) {
    if (s.length() != t.length())
        return false;

    std::array<int, kNumLetters> letter_counter_s = {0};
    for (char c : s) letter_counter_s[GetLetterIndex(c)]++;

    std::array<int, kNumLetters> letter_counter_t = {0};
    for (char c : t) letter_counter_t[GetLetterIndex(c)]++;

    return letter_counter_s == letter_counter_t;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
