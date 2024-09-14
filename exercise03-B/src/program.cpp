// Exercise 03-B: Largest Number

#include <algorithm>
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
    std::string::size_type left = 0;
    while (left < s.length()) {
        const char* whitespace = " \f\n\r\t\v";
        left = s.find_first_not_of(whitespace, left);
        if (left >= s.length()) break;
        std::string::size_type right = s.find_first_of(whitespace, left + 1);
        result.push_back(s.substr(left, right - left));
        left = right;
    }
}

bool CompareNumbersOrder(const std::string& a, const std::string& b) {
    int ab = std::stoi(a + b);
    int ba = std::stoi(b + a);

    return (ab - ba) < 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
