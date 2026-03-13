#include <iostream>
using namespace std;

int c=45;
int main()
{
    int a;
    int b;
    cout<< "Enter a value of a ";
    cin>>a; 
    cout<<"Enter a value of b ";
    cin>>b;
    int c=a+b;
    cout<<"Sum is "<<c<<endl;
    cout<<"golbal c is "<<:: c;
}