// Exercise 03-A: Perfect Valid Square

#include <iostream>

// Functions

bool is_perfect_square(long n) {
    // TODO: Use binary search to determine if n is a perfect valid square.
    return false;
}

// Main Execution

int main(int argc, char *argv[]) {
    long n;

    while (std::cin >> n) {
        std::cout << (is_perfect_square(n) ? "Yes" : "No") << std::endl;
    }

    return 0;
}
