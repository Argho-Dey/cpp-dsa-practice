#inclueds iostream
using namespace std
int main()
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
    int main() {



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
