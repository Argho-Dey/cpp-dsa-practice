#include <iostream>
using namespace std;
void addition (int a , int b );
void substraction (int a , int b );
void multfication (int a , int b );
void dvision (int a , int b );

int main()
{
   addition(4,5);
   substraction(6,5);
   multfication(4,5);
   dvision(4,5);
}
void addition (int a , int b )
{
    int sum = a+b;
    cout<<sum<<endl;
}

void substraction (int a , int b )
{
    int sub = a-b;
    cout<<sub<<endl;
}
void multfication (int a , int b )
{
    int mul = a*b;
    cout<<mul<<endl;
}
void dvision (int a , int b )
{
    float div = (float)a/b;
    cout<<div;
}
