// Exercise 03-B: Largest Number

#include <algorithm>
#include <cctype>
#include <iostream>
#include <istream>
#include <string>
#include <vector>

// Prototypes

bool ReadNumbers(std::istream& input, std::vector<std::string>& numbers);

// Appends the words in the string s to the vector result, using any whitespace
// as the delimiter string.
//
// Runs of consecutive whitespace are regarded as a single separator, and the
// result will contain no empty strings at the start or end if the string has
// leading or trailing whitespace.
void SplitString(const std::string& s, std::vector<std::string>& result);

bool CompareNumbersOrder(const std::string& a, const std::string& b);

// Main Execution

int main(int argc, char* argv[]) {
    std::vector<std::string> numbers;

    while (ReadNumbers(std::cin, numbers)) {
        std::sort(numbers.rbegin(), numbers.rend(), CompareNumbersOrder);
        for (std::string s : numbers) std::cout << s;
        std::cout << '\n';
    }

    return 0;
}

// Functions

bool ReadNumbers(std::istream& input, std::vector<std::string>& numbers) {
    numbers.clear();

    std::string line;
    if (std::getline(input, line)) SplitString(line, numbers);

    return numbers.size();
}

void SplitString(const std::string& s, std::vector<std::string>& result) {
    auto left = s.begin();
    int (*IsSpace)(int) = std::isspace;
    while (left < s.end()) {
        left = std::find_if_not(left, s.end(), IsSpace);
        if (left == s.end()) break;
        auto right = std::find_if(left + 1, s.end(), IsSpace);
        result.emplace_back(left, right);
        left = right;
    }
}

bool CompareNumbersOrder(const std::string& a, const std::string& b) {
    return (a + b) < (b + a);
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
