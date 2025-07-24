/*ID = 22011408
name = Fatin Nadiah binti Mohd Ali*/

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

class Tree {
public:
    Node* root;

    Tree() {
        root = nullptr;
    }

    // Add root node
    void add_root(int value) {
        root = new Node(value);
    }

    // Add left child
    void add_left(Node* parent, int value) {
        if (parent != nullptr) {
            parent->left = new Node(value);
        }
    }

    // Add right child
    void add_right(Node* parent, int value) {
        if (parent != nullptr) {
            parent->right = new Node(value);
        }
    }

    Node* find(Node* node, int target) {
        if (node == nullptr) return nullptr;
        if (node->value == target) return node;

        if (target < node->value)
            return find(node->left, target);
        else
            return find(node->right, target);
    }

    // display root
    void print_root() {
        if (root != nullptr)
            cout << "Root: " << root->value << endl;
    }

    // display left child of a node
    void print_left(Node* parent) {
        if (parent && parent->left)
            cout << "Left child of " << parent->value << ": " << parent->left->value << endl;
    }

    // display right child of a node
    void print_right(Node* parent) {
        if (parent && parent->right)
            cout << "Right child of " << parent->value << ": " << parent->right->value << endl;
    }
};


int main() {
    Tree tree;

    tree.add_root(30);
    tree.add_left(tree.root, 20);
    tree.add_right(tree.root, 40);
    tree.add_left(tree.root->left, 50);
    tree.add_right(tree.root->left, 60);
    tree.add_left(tree.root->right, 70);
    tree.add_right(tree.root->right, 80);

    int target = 30;
    cout << "Search: " << target << endl;
    Node* result = tree.find(tree.root, target);

    if (result != nullptr)
        cout << "Found node: " << result->value << endl;
    else
        cout << "Node  " << target << " not found." << endl;


    return 0;
}