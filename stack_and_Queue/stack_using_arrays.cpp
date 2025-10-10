#include <iostream>
using namespace std;
// stack as arrays
class Stack {
    int arr[10];   // stack array
    int topIndex;  // pointer to top

public:
    Stack() {
        topIndex = -1;
    }

    void push(int x) {
        if (topIndex >= 9) {
            cout << "Stack Overflow\n";
            return;
        }
        topIndex++;
        arr[topIndex] = x;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    int size() {
        return topIndex + 1;
    }

    void display() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= topIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.top() << endl;
    s.pop();
    s.display();

    cout << "Stack size: " << s.size() << endl;
    return 0;
}
