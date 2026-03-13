//5. Write a program to find the factorial of a given number by using a function

#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n < 0)
    {

        return -1;
    }
    else if (n == 0)
    {

        return 1;
    }
    else
    {

        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    long long result = factorial(num);

    if (result == -1)
    {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}

