/* 6. Write functions to calculate the
a) circumference and area of a circle of radius entered by user by defining your own function,
b) area of triangle
c) area of trapezoid,
d) area of rectangle,
e) area of square */

#include<iostream>
using namespace std;

void circum(double r)
{
    const double PI=3.1416;
    double circumference=2*PI*r;
    cout<<"Circumference is "<<circumference<<endl;
}

void triangle(double base,double height)
{
    double area=0.5*base*height;

    cout<<"Area of triangle "<<area<<endl;
}

void trapezoid(double base1,double base2,double height1)
{
    double trap=0.5*(base1+base2)*height1;
    cout<<"Area of trapezoid "<<trap<<endl;
}

void rectangle(int length,int width)
{
    int rectangle=length * width;
    cout<<"Area of rectangle "<<rectangle<<endl;

}

int square(int s)
{
    return s*s;
}

int main()
{
    double r,base1,base2,height1,base,height,length,width;
    cout<<"enter the radius "<<endl;
    cin>>r;
    circum(r);
    cout<<"enter base & height "<<endl;
    cin>>base>>height;
    triangle(base,height);
    cout<<"enter the two base and height "<<endl;
    cin>>base1>>base2>>height;
    trapezoid(base1,base2,height);
    cout<<"enter the length & width "<<endl;
    cin>>length>>width;
    rectangle(length,width);
    cout<<"enter the length value "<<endl;
    int s;
    cin>>s;
    int result=square(s);
    cout<<"Area of square "<<result;
    return 0;
}
