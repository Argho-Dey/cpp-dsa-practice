#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};


void traverse(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


void insert(Node*& head, int value)
{
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

bool search(Node* head, int key)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void deleteNode(Node*& head, int key)
{
    if (head == nullptr) return;


    if (head->data == key)
    {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        cout << "Value not found!" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

int main()
{
    Node* head = nullptr;


    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    cout << "Linked list after insertion: ";
    traverse(head);

    int searchKey = 20;
    cout << "Searching for " << searchKey << ": "
         << (search(head, searchKey) ? "Found" : "Not Found") << endl;


    int deleteKey = 20;
    cout << "Deleting " << deleteKey << "..." << endl;
    deleteNode(head, deleteKey);
    cout << "Linked list after deletion: ";
    traverse(head);

    return 0;
}

