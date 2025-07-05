//fatin nadiah mohd ali
//22011408

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int* arr;

public:
    // Constructor
    Stack(int capacity) {
        size = capacity;
        arr = new int[size];
        top = -1;
    }

    // Push (store data)
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack.\n";
        }
    }

    // Pop (remove top)
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to pop.\n";
        } else {
            cout << arr[top--] << " popped from stack.\n";
        }
    }

    // Peek (see top value)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    // Check if stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack stack(5);  // Stack size 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop(); // Trying to pop from empty stack

    return 0;
}
