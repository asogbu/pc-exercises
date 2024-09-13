// Exercise 01-A: Line Totals

#include <cctype>
#include <iostream>
#include <string>

// Prototypes

void LTrim(std::string &s);
int GetStringSum(std::string s);

// Main Execution

int main(int argc, char *argv[]) {
    std::string line;

    while (std::getline(std::cin, line))
        std::cout << GetStringSum(line) << '\n';

    return 0;
}

// Functions

int GetStringSum(std::string s) {
    int sum = 0;

    while (s.length() > 0) {
        size_t pos;
        sum += std::stoi(s, &pos);
        s.erase(0, pos);
        LTrim(s);
    }

    return sum;
}

void LTrim(std::string &s) {
    size_t pos = 0;
    while (pos < s.size() && std::isspace(s[pos])) pos++;
    s.erase(0, pos);
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
