// Exercise 01-B: Fixed Totals

#include <iostream>
#include <sstream>
#include <string>

int sum_series(int n);

int main(int argc, char *argv[]) {
    for (std::string line; std::getline(std::cin, line);) {
        std::stringstream ss(line);
        int n;
        ss >> n;
        if (n == 0)
            break;

        std::cout << sum_series(n) << '\n';
    }

    return 0;
}

int sum_series(int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        std::string line;
        std::getline(std::cin, line);
        std::stringstream ss(line);
        int j;
        ss >> j;
        sum += j;
    }

    return sum;
}
