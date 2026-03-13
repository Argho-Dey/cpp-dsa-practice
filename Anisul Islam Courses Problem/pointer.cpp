#include<iostream>
using namespace std;
int main()
{
    int a=30, b=50;
    int *p=&a; int *d=&b,v;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*d<<endl;v=*p+*d;
    cout<<v<<endl;*p=20;
    cout<<a;


}
