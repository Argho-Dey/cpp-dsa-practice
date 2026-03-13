#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;

}
int main()
{
    int x=30;
    int y=70;
    cout<< "before swap: "<<x <<" "<<y<<endl;
    swap (x,y);
    cout <<"after swap: "<<x << " "<<y<<endl;
}
