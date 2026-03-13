
#include <iostream>

using namespace std;

int main() {
  int size;

  // Get the size of the array from the user
  cout << "Enter the size of the array: ";
  cin >> size;

  // Dynamically allocate memory for the array
  int* arr = new int[size];

  // Check if memory allocation was successful
  if (arr == nullptr) {
    cout << "Memory allocation failed!" << endl;
    return 1;
  }

  // Access and potentially modify elements of the array
  cout << "Enter elements for the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  // Print the elements of the array
  cout << "Array elements: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Deallocate the memory used by the array
  delete[] arr;
  arr = nullptr;  // Set the pointer to null to avoid dangling pointers

  cout << "Memory deallocated." << endl;

  return 0;
}
