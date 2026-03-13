#include <iostream>
using namespace std;
int main()
{
    int num1, num2, n1,n2, rem ,gcd ,lcd;
    cout << "enter two number";
    cin >> num1 >>num2;
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem= n1 % n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcd= (n1+n2)/gcd;
    cout<< "gcd= "<< gcd <<endl;
    cout << "lcd= " <<lcd;
}
