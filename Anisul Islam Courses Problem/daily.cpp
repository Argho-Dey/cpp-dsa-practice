#include <iostream>
using namespace std;
int main()
{
    int DAYS_IN_WEEK = 7;
    double dailySales[DAYS_IN_WEEK];
    double totalSale = 0.0;

    cout << "Enter the daily sales for the week: ";
    for (int i = 0; i < DAYS_IN_WEEK; ++i)
    {
        cin >> dailySales[i];
        totalSale += dailySales[i];
    }

    double averageSale = totalSale / DAYS_IN_WEEK;

    cout << "Average sale: " << fixed << averageSale << endl;


    int belowAverageDays = 0;
    for (int i = 0; i < DAYS_IN_WEEK; ++i)
    {
        if (dailySales[i] < averageSale)
        {
            belowAverageDays++;
        }
    }

    cout << "Number of days with sales below the average: " << belowAverageDays << endl;

    return 0;
}

