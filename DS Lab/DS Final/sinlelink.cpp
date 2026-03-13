#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* newNode(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);

    cout << "Created Linked List: ";
    printList(head);

    insertAtBeginning(&head, 4);
    cout << "Linked List after insertion at beginning: ";
    printList(head);

    insertAtEnd(head, 5);
    cout << "Linked List after insertion at end: ";
    printList(head);

    insertAfter(head->next, 6);
    cout << "Linked List after insertion after 2nd node: ";
    printList(head);

    deleteNode(&head, 3);
    cout << "Linked List after deletion of 3rd node: ";
    printList(head);

    return 0;
}
