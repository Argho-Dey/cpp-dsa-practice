#include <iostream>
#include <string>
using namespace std;


struct Song {
    string title;
    Song* next;

    Song(string t) : title(t), next(nullptr) {}
};

class Playlist {
private:
    Song* head;

public:
    Playlist() : head(nullptr) {}

    void addSong(string title) {
        Song* newSong = new Song(title);
        if (!head) {
            head = newSong;
        } else {
            Song* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newSong;
        }
        cout << "Song '" << title << "' added to the playlist." << endl;
    }

    void removeSong(string title) {
        if (!head) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        if (head->title == title) {
            Song* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "Song '" << title << "' removed from the playlist." << endl;
            return;
        }

        Song* temp = head;
        while (temp->next && temp->next->title != title) {
            temp = temp->next;
        }

        if (temp->next) {
            Song* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "Song '" << title << "' removed from the playlist." << endl;
        } else {
            cout << "Song '" << title << "' not found in the playlist." << endl;
        }
    }

    void searchSong(string title) {
        Song* temp = head;
        while (temp) {
            if (temp->title == title) {
                cout << "Song '" << title << "' found in the playlist." << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song '" << title << "' not found in the playlist." << endl;
    }

    void displayPlaylist() {
        if (!head) {
            cout << "Playlist is empty!" << endl;
            return;
        }

        Song* temp = head;
        cout << "Playlist:" << endl;
        while (temp) {
            cout << "- " << temp->title << endl;
            temp = temp->next;
        }
    }
};


struct InventoryItem {
    int id;
    InventoryItem* left;
    InventoryItem* right;

    InventoryItem(int i) : id(i), left(nullptr), right(nullptr) {}
};

class Inventory {
private:
    InventoryItem* root;

    void inOrderTraversal(InventoryItem* node) {
        if (node) {
            inOrderTraversal(node->left);
            cout << node->id << " ";
            inOrderTraversal(node->right);
        }
    }

    InventoryItem* insertItem(InventoryItem* node, int id) {
        if (!node) return new InventoryItem(id);
        if (id < node->id) {
            node->left = insertItem(node->left, id);
        } else if (id > node->id) {
            node->right = insertItem(node->right, id);
        }
        return node;
    }

    InventoryItem* findMin(InventoryItem* node) {
        while (node && node->left) {
            node = node->left;
        }
        return node;
    }

    InventoryItem* deleteItem(InventoryItem* node, int id) {
        if (!node) return nullptr;
        if (id < node->id) {
            node->left = deleteItem(node->left, id);
        } else if (id > node->id) {
            node->right = deleteItem(node->right, id);
        } else {
            if (!node->left) {
                InventoryItem* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                InventoryItem* temp = node->left;
                delete node;
                return temp;
            }

            InventoryItem* temp = findMin(node->right);
            node->id = temp->id;
            node->right = deleteItem(node->right, temp->id);
        }
        return node;
    }

public:
    Inventory() : root(nullptr) {}

    void insert(int id) {
        root = insertItem(root, id);
        cout << "Item with ID " << id << " inserted into the inventory." << endl;
    }

    void remove(int id) {
        root = deleteItem(root, id);
        cout << "Item with ID " << id << " removed from the inventory." << endl;
    }

    void displaySorted() {
        cout << "Inventory IDs in sorted order: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void findSmallestAndLargest() {
        if (!root) {
            cout << "Inventory is empty!" << endl;
            return;
        }

        InventoryItem* smallest = findMin(root);
        InventoryItem* largest = root;
        while (largest && largest->right) {
            largest = largest->right;
        }

        cout << "Smallest ID: " << smallest->id << endl;
        cout << "Largest ID: " << largest->id << endl;
    }
};

int main() {

    Playlist playlist;
    playlist.addSong("Song A");
    playlist.addSong("Song B");
    playlist.addSong("Song C");
    playlist.displayPlaylist();
    playlist.searchSong("Song B");
    playlist.removeSong("Song B");
    playlist.displayPlaylist();

    Inventory inventory;
    inventory.insert(10);
    inventory.insert(20);
    inventory.insert(5);
    inventory.displaySorted();
    inventory.findSmallestAndLargest();
    inventory.remove(10);
    inventory.displaySorted();

    return 0;
}
