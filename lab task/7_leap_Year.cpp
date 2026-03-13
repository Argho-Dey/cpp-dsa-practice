//7. Write a function that can determine whether the year is leap year or not.


#include <iostream>
using namespace std;

bool leapYear(int year)
{

    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (leapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

