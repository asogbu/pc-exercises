// Exercise 01-C: Count Duplicates

#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[]) {
    int duplicates = 0;
    std::unordered_set<int> seen_numbers;

    int n;
    while (std::cin >> n)
        if (!seen_numbers.insert(n).second) duplicates++;

    std::cout << duplicates << '\n';

    return 0;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
