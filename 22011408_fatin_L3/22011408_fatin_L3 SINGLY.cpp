//fatin nadiah mohd ali
//22011408

#include <iostream>
using namespace std;

// CLASS UNTUK NODE
class SinglyNode {
public:
    string data;
    SinglyNode* next;

    SinglyNode(string value) {
        data = value;
        next = nullptr;
    }
};

// CLASS UNTUK LINKED LIST
class SinglyLinkedList {
private:
    SinglyNode* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    void addNode(string value) {
        SinglyNode* newNode = new SinglyNode(value);
        if (!head) {
            head = newNode;
        } else {
            SinglyNode* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void displayList() {
        SinglyNode* temp = head;
        cout << "Singly Linked List: ";
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void deleteNode(string value) {
        if (!head) return;

        if (head->data == value) {
            SinglyNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        SinglyNode* temp = head;
        while (temp->next && temp->next->data != value)
            temp = temp->next;

        if (temp->next) {
            SinglyNode* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
};

int main() {
    SinglyLinkedList sList;

    sList.addNode("fatin");
    sList.addNode("nadiah");
    sList.addNode("ali");
    sList.displayList();

    sList.deleteNode("ali");
    sList.displayList();

    return 0;
}
