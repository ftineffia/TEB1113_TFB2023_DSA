//fatin nadiah mohd ali
//22011408

#include <iostream>
using namespace std;

// CLASS UNTUK NODE
class DoublyNode {
public:
    int data;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(int value) {
        data = value;
        next = prev = nullptr;
    }
};

// CLASS UNTUK LINKED LIST
class DoublyLinkedList {
private:
    DoublyNode* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void addNode(int value) {
        DoublyNode* newNode = new DoublyNode(value);
        if (!head) {
            head = newNode;
        } else {
            DoublyNode* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void displayList() {
        DoublyNode* temp = head;
        cout << "Doubly Linked List: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void deleteNode(int value) {
        if (!head) return;

        if (head->data == value) {
            DoublyNode* toDelete = head;
            head = head->next;
            if (head) head->prev = nullptr;
            delete toDelete;
            return;
        }

        DoublyNode* temp = head;
        while (temp && temp->data != value)
            temp = temp->next;

        if (temp) {
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList dList;

    dList.addNode(100);
    dList.addNode(200);
    dList.addNode(300);
    dList.displayList();

    dList.deleteNode(200);
    dList.displayList();

    return 0;
}
