/*ID = 22011408
name = Fatin Nadiah binti Mohd Ali*/

#include <iostream>
using namespace std;

class Node {
    public: string name;
    Node* left;
    Node* right;
    
    Node(string n) {
        name = n;
        left = nullptr;
        right = nullptr;        
    }
};

class Tree{
    public:
    Node* root;
    
    Tree() {
        root = nullptr;
    }
    
    void add_root(string name) {
        root = new Node(name);
    }
    
    Node* find(Node* node, string name) {
        if (node == nullptr) return nullptr;
        if (node -> name == name) return node;
        
        Node* leftResult = find (node -> left, name);
        if (leftResult != nullptr) return leftResult;
        
        return find (node -> right, name);
    }
    
    void add_left(string parentName, string childName) {
        Node* parent = find(root, parentName);
        if (parent != nullptr) {
            parent -> left = new Node(childName);
        }
    }
    
    void add_right(string parentName, string childName) {
        Node* parent = find(root, parentName);
        if (parent != nullptr) {
            parent -> right = new Node(childName);
        }
    }
    
    void print_root() {
        if (root != nullptr)
            cout << "Root: " << root -> name << endl;
    }
    
    void print_left(string parentName) {
        Node* parent = find(root, parentName);
        if (parent && parent -> left)
            cout << "Left child of " << parentName << ": " << parent -> left -> name << endl;
    }
    
    void print_right(string parentName) {
        Node* parent = find (root, parentName);
        if (parent && parent->right)
            cout << "Right child of " << parentName << ": " << parent -> right -> name << endl;
    }
};

int main () {
    Tree tree;
    
    tree.add_root("A");
    tree.add_left("A", "B");
    tree.add_right("A", "C");
    tree.add_left("B", "D");
    tree.add_right("B", "E");
    tree.add_left("C", "F");
    tree.add_right("C", "G");
    
    tree.print_root();
    tree.print_left("A");
    tree.print_right("A");
    tree.print_left("B");
    tree.print_right("B");
    tree.print_left("C");
    tree.print_right("C");
    
    return 0;
}