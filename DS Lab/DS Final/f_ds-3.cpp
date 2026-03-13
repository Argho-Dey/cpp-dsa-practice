#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL) return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

bool search(Node* root, int value) {
    if (root == NULL) return false;
    if (root->data == value) return true;
    if (value < root->data) return search(root->left, value);
    return search(root->right, value);
}

Node* findMin(Node* root) {
    while (root->left != NULL) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int value) {
    if (root == NULL) return root;
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        if (root->left == NULL) return root->right;
        else if (root->right == NULL) return root->left;
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Search\n3. Delete\n4. Inorder Traversal\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                root = insert(root, value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                cout << (search(root, value) ? "Found" : "Not Found") << endl;
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode(root, value);
                break;
            case 4:
                inorder(root);
                cout << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
