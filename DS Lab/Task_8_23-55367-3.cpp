#include <iostream>
using namespace std;
int main()
{
    string x;
    int j=2;
    int l;
    getline(cin,x);


    l=x.length();

    for (int i=j; i<l; i+=(j+1))
    {
        x[i]=x[i]+2;

    }
    cout<<x;
}

