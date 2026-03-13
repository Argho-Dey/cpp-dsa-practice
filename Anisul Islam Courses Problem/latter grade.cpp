#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout <<"Enter your mark: ";
    cin>> mark;
    if(mark>100 || mark<0)
    {
        cout<<"invalid mark";
    }
    else if (mark>=90)
    {
        cout<<"A+";}
     else if (mark>=85)
    {
        cout<<"A";}
     else if (mark>=80)
    {
        cout<<"B+";}
     else if (mark>=75)
    {
        cout<<"B";}
     else if (mark>=70)
    {
        cout<<"C+";}
     else if (mark>=65)
    {
        cout<<"C";}
     else if (mark>=60)
    {
        cout<<"D+";}
     else if (mark>=50)
    {
        cout<<"D";}
     else
    {
        cout<<"fail";
    }

}
