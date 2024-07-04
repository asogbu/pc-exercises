// Exercise 09-D: Invert Binary Tree

#include <iostream>
#include <memory>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

// Node structures

template <typename T>
struct Node {
    T value;
    struct Node *left;
    struct Node *right;
};

typedef Node<int> IntNode;

// Functions

bool read_values(std::vector<int> &values) {
    values.clear();

    std::string line;
    if (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        int i;

        while (ss >> i) {
            values.push_back(i);
        }
    }

    return !values.empty();
}

IntNode *read_tree(std::vector<int> &values, size_t index = 0) {
    return nullptr;
}

void dump_tree(IntNode *root) {
}

IntNode *invert_tree(IntNode *root) {
    // Base Case: Invalid Node

    // Divide and Conquer: Swap left and right and recurse
    return nullptr;
}

// Main execution

int main(int argc, char *argv[]) {
    std::vector<int> values;

    while (read_values(values)) {
        auto root = read_tree(values);
        invert_tree(root);
        dump_tree(root);
    }

    return 0;
}
