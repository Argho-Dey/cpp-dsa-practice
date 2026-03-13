#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int prices[n];
    cout << "Enter the prices for each day:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int min_price = prices[0];
    int max_profit = 0;
    int buy_day = 0, sell_day = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
            buy_day = i;
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
            sell_day = i;
        }
    }

    if (max_profit > 0) {
        cout << "Buy on day " << buy_day + 1 << " at price " << min_price << endl;
        cout << "Sell on day " << sell_day + 1 << " at price " << prices[sell_day] << endl;
        cout << "Maximum profit: " << max_profit << endl;
    } else {
        cout << "No profit." << endl;
    }

    return 0;
}
