// Exercise 07-A: Cookies

#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>

// Functions

bool readline(std::deque<int> &v) {
    // TODO: Read a line from stdin
    return false;
}

int feed_children(std::deque<int> &children, std::deque<int> &cookies) {
    // TODO: Return number of children fed with cookies
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    std::deque<int> children;
    std::deque<int> cookies;

    while (readline(children) && readline(cookies)) {
        std::cout << feed_children(children, cookies) << std::endl;
    }

    return 0;
}
