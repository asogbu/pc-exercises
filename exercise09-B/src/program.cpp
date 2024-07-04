// Exercise 09-B: Binary Tree Min

#include <climits>
#include <iostream>
#include <memory>

// Node structures

template <typename T>
struct Node {
    T value;
    Node *left;
    Node *right;
};

// Find minimum of tree

template <typename T>
T minimum_tree(Node<T> *root) {
    // Base case: Invalid Node

    // Divide and Conquer: Recursively solve left and right sub-trees

    // Combine: Take minimum of current node and left and right minimums
    return 0;
}

// Main execution

int main(int argc, char *argv[]) {
    Node<int> *root = new Node<int>{7,
                                    new Node<int>{5,
                                                  new Node<int>{3, nullptr, nullptr},
                                                  nullptr},
                                    new Node<int>{4,
                                                  nullptr,
                                                  new Node<int>{2, nullptr, nullptr}}};

    std::cout << minimum_tree(root) << std::endl;
    return 0;
}
