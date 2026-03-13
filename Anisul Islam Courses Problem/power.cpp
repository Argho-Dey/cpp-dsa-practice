#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int sum=0, n;
    cout << "Enter a number ";
    cin >> n;
    for ( int i=1 ; i<=n ; i=i+1)
    {
        sum =sum + pow(i,3);

    }
    cout << sum;

}
