#include <iostream>
using namespace std;
int main() {
    int days = 7;
    int stock[days];


    for (int i = 0; i < days; i++) {
        cout << "Enter stock level for day " << i + 1 << ": ";
        cin >> stock[i];
    }


    int highest_day = 0, lowest_day = 0;
    int highest_stock = stock[0], lowest_stock = stock[0];
    for (int i = 1; i < days; i++) {
        if (stock[i] > highest_stock) {
            highest_day = i;
            highest_stock = stock[i];
        }
        if (stock[i] < lowest_stock) {
            lowest_day = i;
            lowest_stock = stock[i];
        }
    }


    cout << "Day with highest stock level: " << highest_day + 1  << highest_stock  << endl;
    cout << "Day with lowest stock level: " << lowest_day + 1 << lowest_stock << endl;

    return 0;
}
