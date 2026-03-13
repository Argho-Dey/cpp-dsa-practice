#include<iostream>
using namespace std;


    void swap (int &a, int&b)
    {
        int temp=a;
         a=b;
        b=temp;
    }
    int main()
    {
        int x=34;
        int y=32;
        cout << "before swap: "<<x <<" "<<y<<endl;
        swap (x,y);
        cout << "after swap: "<<x <<" "<<y;
    }
