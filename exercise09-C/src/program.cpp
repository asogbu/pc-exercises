// Exercise 09-C: Binary Tree Height

#include <iostream>
#include <memory>

// Node structures

template <typename T>
struct Node {
    T value;
    struct Node *left;
    struct Node *right;
};

// Find height of tree

template <typename T>
size_t height_tree(Node<T> *root) {
    // Base Case: Invalid Node

    // Divide and Conquer: Recursively solve left and right sub-trees

    // Combine: Take maximum of sub-trees and add 1
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    Node<int> *root = new Node<int>{7,
                                    new Node<int>{5,
                                                  new Node<int>{3,
                                                                new Node<int>{2, nullptr, nullptr},
                                                                nullptr},
                                                  nullptr},
                                    new Node<int>{4,
                                                  nullptr,
                                                  new Node<int>{2, nullptr, nullptr}}};

    std::cout << height_tree(root) << std::endl;
    return 0;
}
