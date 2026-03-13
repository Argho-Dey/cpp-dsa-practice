#include <iostream>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    while (t--) {
        cin >> n;

        // The number of ordered pairs is simply n/2
        // If n is even, there are n/2 pairs
        // If n is odd, there are (n-1)/2 pairs
        int pairs = n / 2;

        cout << pairs << endl;
    }

    return 0;
}
