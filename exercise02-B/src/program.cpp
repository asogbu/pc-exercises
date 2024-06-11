// Exercise 02-B: PBB-matched

#include <iomanip>
#include <iostream>
#include <stack>
#include <string>

// Functions

bool is_pbbmatched(const std::string &s) {
    // TODO: Process string s using a stack to determine if the symbols are balanced
    return false;
}

// Main execution

int main(int argc, char *argv[]) {
    std::string line;

    while (std::getline(std::cin, line)) {
        std::cout << std::setw(10) << line << ": " << (is_pbbmatched(line) ? "Yes" : "No") << std::endl;
    }

    return 0;
}
