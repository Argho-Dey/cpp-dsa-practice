#include<iostream>
using namespace std;
int main()
{
    double base ,hight, radius, A_R ,A_C, A_S;
    cout<<"Enter a base"<<endl;
    cin>>base;
    cout<<"Enter a hight"<<endl;
    cin>> hight;
    cout<<"Enter a radius"<<endl;
    cin>> radius;
    A_R=base*hight;
    cout<<"Area of ractengale: "<<A_R<<endl;
    A_C=3.143*radius*radius;
    cout<< "Area of a circle: "<<A_C<<endl;
    A_S=hight*hight;
    cout<< "Area of square: " <<A_S<<endl;

}
