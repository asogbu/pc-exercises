// Exercise 07-B: Max Min

#include <algorithm>
#include <iostream>
#include <vector>

// Functions

bool read_numbers(int &n, int &k, std::vector<int> &v) {
    int t;

    if (!(std::cin >> n >> k)) {
        return false;
    }

    v.clear();
    for (int i = 0; i < n; i++) {
        std::cin >> t;
        v.push_back(t);
    }

    return true;
}

int compute_unfairness(int n, int k, std::vector<int> &v) {
    // TODO: Compute minimum unfairness
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    int n, k;
    std::vector<int> v;

    while (read_numbers(n, k, v)) {
        std::cout << compute_unfairness(n, k, v) << std::endl;
    }

    return 0;
}
