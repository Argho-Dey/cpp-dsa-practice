#include <iostream>

using namespace std;
int main() {

int findFirstOccurrence int arr[] int size int target
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }



    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int index = findFirstOccurrence(arr, size, target);
    if (index != -1) {
        cout << "The first occurrence of " << target << " is at index " << index << endl;
    } else {
        cout << target << " is not found in the array." << endl;
    }

    return 0;
}
