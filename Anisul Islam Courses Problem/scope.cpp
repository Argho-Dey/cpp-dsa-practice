#include <iostream>
using namespace std;

int a=30;

int main()
{
   ::a=13;
   cout<<::a;
}
