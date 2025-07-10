//fatin nadiah binti mohd ali
//22011408
#include <iostream>
using namespace std;

class QueueArray {
private:
    static const int max = 5;
    int queue[max];
    int front;
    int rear;

public:
    QueueArray() {
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == max - 1) {
            cout << "Queue FULL" << endl;
        } else {
            rear++;
            queue[rear] = value;
        }
    }

    void dequeue() {
        if (front > rear) {
            cout << "Underflow " << endl;
        } else {
            cout << "Removed: " << queue[front] << endl;
            front++;
        }
    }

    void display() {
        if (front > rear) {
            cout << "Empty Queue" << endl;
        } else {
            cout << "Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueueArray q; 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();    
    q.dequeue();    
    q.display();    

    return 0;
}
//fatin nadiah binti mohd ali
//22011408
#include <iostream>
using namespace std;

class QueueArray {
private:
    static const int max = 5;
    int queue[max];
    int front;
    int rear;

public:
    QueueArray() {
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == max - 1) {
            cout << "Queue FULL" << endl;
        } else {
            rear++;
            queue[rear] = value;
        }
    }

    void dequeue() {
        if (front > rear) {
            cout << "Underflow " << endl;
        } else {
            cout << "Removed: " << queue[front] << endl;
            front++;
        }
    }

    void display() {
        if (front > rear) {
            cout << "Empty Queue" << endl;
        } else {
            cout << "Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    QueueArray q; 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();    
    q.dequeue();    
    q.display();    

    return 0;
}
