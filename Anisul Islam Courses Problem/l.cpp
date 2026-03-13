#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Get user input for both numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Find the largest number using the ternary operator
    int largest = (num1 > num2) ? num1 : num2;

    // Alternate approach: using the std::max() function
    // int largest = max(num1, num2);

    // Print the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}

