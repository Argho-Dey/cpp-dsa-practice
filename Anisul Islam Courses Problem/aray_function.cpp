#include<iostream>
using namespace std;
void aray (int a[], int s)
{
    for (int i=0;i<s; i++ )
    cout <<a[i]<< " ";
}
int main()
{
    int h[4]={6 ,8 ,8,5};
    aray (h,4);
}
