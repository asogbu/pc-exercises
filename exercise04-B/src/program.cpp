// Exercise 04-B: Happy Number

#include <iostream>
#include <unordered_map>
#include <unordered_set>

// Prototypes

bool IsHappyCached(int n, std::unordered_map<int, bool>& cache);
int SquareDigitsSum(int n);

// Main execution

int main(int argc, char* argv[]) {
    std::unordered_map<int, bool> cache;

    int n;
    while (std::cin >> n)
        std::cout << (IsHappyCached(n, cache) ? "Yes" : "No") << '\n';

    return 0;
}

// Functions

bool IsHappyCached(int n, std::unordered_map<int, bool>& cache) {
    std::unordered_set<int> seen;
    bool is_happy = false;

    while (seen.find(n) == seen.end()) {
        if (cache.find(n) != cache.end()) {
            is_happy = cache[n];
            break;
        }

        seen.insert(n);
        n = SquareDigitsSum(n);
    }

    if (n == 1)
        is_happy = true;

    for (int s : seen) {
        cache[s] = is_happy;
    }

    return is_happy;
}

int SquareDigitsSum(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

// vim: set sts=4 sw=4 ts=8 ft=cpp:
