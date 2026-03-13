//8. Write a function to find the a) smallest value from three numbers, b) biggest value from 3 numbers


#include <iostream>
using namespace std;

int f_Smallest(int num1, int num2, int num3)
{
    int smallest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }

    return smallest;
}

int f_Biggest(int num1, int num2, int num3)
{
    int biggest = num1;

    if (num2 > biggest)
    {
        biggest = num2;
    }
    if (num3 > biggest)
    {
        biggest = num3;
    }

    return biggest;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int s_Value = f_Smallest(num1, num2, num3);
    int b_Value = f_Biggest(num1, num2, num3);

    cout << "Smallest value: " << s_Value << endl;
    cout << "Biggest value: " << b_Value << endl;

    return 0;
}

