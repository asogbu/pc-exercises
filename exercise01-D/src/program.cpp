// Exercise 01-D: Count Duplicates

#include <limits.h>

#include <iostream>
#include <istream>
#include <string>

// Prototypes

int FindMatrixMaxRow(std::istream& input, int n);
int GetStringSum(std::string s);
void LTrim(std::string& s);

// Main Execution

int main(int argc, char* argv[]) {
    std::string line;
    while (std::getline(std::cin, line)) {
        int n = std::stoi(line);
        if (n == 0) break;

        std::cout << FindMatrixMaxRow(std::cin, n) << '\n';
    }

    return 0;
}

// Functions

int FindMatrixMaxRow(std::istream& input, int n) {
    int max_sum = INT_MIN;
    int max_row = 0;

    std::string line;
    for (int row = 1; row <= n; row++) {
        std::getline(input, line);
        int row_sum = GetStringSum(line);

        if (row_sum > max_sum) {
            max_sum = row_sum;
            max_row = row;
        }
    }

    return max_row;
}

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

void LTrim(std::string& s) {
    size_t pos = 0;
    while (pos < s.size() && std::isspace(s[pos])) pos++;
    s.erase(0, pos);
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
