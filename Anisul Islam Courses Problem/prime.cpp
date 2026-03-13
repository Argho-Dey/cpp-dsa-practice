#include <iostream>
using namespace std;
int main()
{
    int n, cou=0, i;
    cout << "Enter a positive number: ";
    cin >>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cou++;
            break;
        }
    }
    if(cou==0)
        cout<< "prime number";
    else
        cout<< "Not prime number";
}
