#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Pushed " << value ;
}

int pop() {
    if (top == nullptr) {
        cout << "Stack is empty. Cannot pop.\n";
        return -1;
    }
    int value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
}

int topp() {
    if (top == nullptr) {
        cout << "Stack is empty.\n";
        return -1;
    }
    return top->data;
}

bool isStackEmpty() {
    return top == nullptr;
}

int stackSize() {
    int count = 0;
    Node* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void displayStack() {
    if (top == nullptr) {
        cout << "Stack is empty.\n";
        return;
    }
    Node* current = top;
    cout << "Stack elements: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n, option, value;

    do {
        cout << "1. Push an element in stack" << endl;
        cout << "2. Pop an element from stack" << endl;
        cout << "3. Display stack" << endl;
        cout << "4. Display current stack size" << endl;
        cout << "5. Display top element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        switch (option) {
            case 1:
                cout << "Insert an element: ";
                cin >> n;
                push(n);
                break;
            case 2:
                value = pop();
                if (value != -1)
                    cout << "Popped element is: " << value << endl;
                break;
            case 3:
                displayStack();
                break;
            case 4:
                cout << "Current stack size: " << stackSize() << endl;
                break;
            case 5:
                cout << "Top element is: " << topp() << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (option <= 6);

    return 0;
}
