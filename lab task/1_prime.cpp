//1. Define a function to find out if the number is prime or not.

#include <iostream>
using namespace std;
bool Prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (Prime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

