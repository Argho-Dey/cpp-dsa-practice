#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    int count = 0;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            count++;
            cout << "operator" << count << " : " << ch << endl;
        }
    }

    cout << "number of operators = " << count << endl;

    return 0;
}
