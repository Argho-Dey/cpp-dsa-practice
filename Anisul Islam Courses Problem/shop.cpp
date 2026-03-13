#include <iostream>

using namespace std;

int main()
{
    int numDays = 30;
    int dailySales[numDays];
    double totalSales = 0, average;



    for (int i = 0; i < numDays; ++i)
    {
        cout << "Enter sales for Day " << i + 1 << ": ";
        cin >> dailySales[i];
        totalSales += dailySales[i];
    }


    cout << "Total Sales: " << totalSales << endl;

    average= totalSales/numDays;
    cout<< "average: "<<average;


    if (totalSales >= average)
    {
        cout << "Congratulations! The store met its monthly sales target." << endl;
    }
    else
    {
        cout << "The store fell short of its weekly sales target by " << endl;
    }

    return 0;
}

