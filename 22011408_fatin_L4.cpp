#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList() {
        head = nullptr;
    }

    // Add node at the end
    void addNode(int value) {
        Node* newNode = new Node(value);

        if (!head) {
            // First node
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            Node* tail = head->prev;

            tail->next = newNode;
            newNode->prev = tail;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    // Display forward
    void displayForward() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Display backward
    void displayBackward() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* tail = head->prev;
        Node* temp = tail;

        do {
            cout << temp->data << " ";
            temp = temp->prev;
        } while (temp != tail);
        cout << endl;
    }
};

int main() {
    CircularDoublyLinkedList cdll;

    cdll.addNode(10);
    cdll.addNode(20);
    cdll.addNode(30);
    cdll.addNode(40);

    cout << "Forward: ";
    cdll.displayForward();     // Output: 10 20 30 40

    cout << "Backward: ";
    cdll.displayBackward();    // Output: 40 30 20 10

    return 0;
}
