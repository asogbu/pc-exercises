// Exercise 02-B: PBB-matched

#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

// Constants

const std::unordered_map<char, char> kMatching = {
    {')', '('}, {']', '['}, {'}', '{'}};

// Functions

bool IsPBBMatched(const std::string& s) {
    std::stack<char> open_pbb;

    for (char c : s) {
        if (kMatching.find(c) != kMatching.end()) {
            // c is a closing symbol
            if (open_pbb.empty()) return false;
            if (open_pbb.top() != kMatching.at(c)) return false;
            open_pbb.pop();
        } else {
            // c is an opening symbol
            open_pbb.push(c);
        }
    }

    return open_pbb.empty();
}

// Main execution

int main(int argc, char* argv[]) {
    std::string line;

    while (std::getline(std::cin, line)) {
        std::cout << std::setw(10) << line << ": "
                  << (IsPBBMatched(line) ? "Yes" : "No") << '\n';
    }

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
