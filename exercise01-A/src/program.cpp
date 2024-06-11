// Exercise 01-A: Line Totals

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
    for (std::string line; std::getline(std::cin, line);) {
        std::stringstream ss(line);

        int sum = 0;
        int n;
        while (ss >> n)
            sum += n;

        std::cout << sum << '\n';
    }

    return 0;
}
