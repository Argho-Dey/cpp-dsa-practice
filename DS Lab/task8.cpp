#include <iostream>
#include <string>

using namespace std;

string encode(string s, int j) {
    int n = s.length();
    for (int i = j; i < n; i += j + 1) {
        s[i] = (s[i] + 2) % 256;
    }

}

int main() {
    string s = "I am a student";
    int j = 2;
    string encoded_string = encode(s, j);
    cout << encoded_string << endl;
    return 0;
}
