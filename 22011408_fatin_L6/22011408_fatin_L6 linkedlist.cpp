//fatin nadiah binti mohd ali
//22011408
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        Node(int value){
            data = value;
            next = nullptr;
        }
};
class LinkedQueue {
    private:
        Node* front;
        Node* rear;
        
    public:
        LinkedQueue(){
            front = rear = nullptr;
        }
        
    void enqueue(int value){
        Node* newNode = new Node(value);
        if (!rear){
            front = rear = newNode;
        } else {
            rear -> next = newNode;
            rear = newNode;
            
        }
    }
    
    void dequeue (){
        if (!front){
            cout<<"Underflow";
            
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << "Removed: " << temp->data << endl;
        delete temp;

        if (!front) {
            rear = nullptr;
        }
    
    }
    
    void display() {
        if (!front) {
            cout << "Queue empty" << endl;
            return;
        }

        cout << "Queue: ";
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();  

    q.dequeue();  
    q.display();  
    q.enqueue(40);
    q.display();  

    return 0;
}