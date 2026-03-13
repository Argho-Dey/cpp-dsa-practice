#include <iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    cout << "Enter a number: " ;
    cin >>num1;
    cout << " Enter another number: ";
    cin >>num2;

         if (num1>num2)
    {
        cout <<"Large number is: " << num1 <<endl;
    }
    else
    {
        cout <<"Large number is: "<<num2;
    }
}
