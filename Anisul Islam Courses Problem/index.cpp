#include <iostream>
using namespace std ;

int main()
{
    cout << "Enter the size of the array : " ;
    int x ;
    cin >> x ;


    int argho[x] ;
    cout<<"enter the elements of array: ";

    for(int i=0; i<x; i++)
    {
        cin >> argho[i] ;
    }
    cout << "Enter the element which index number you want to know : " ;
    int y ;
    cin >> y ;

   for(int i=0; i<x; i++)
    {
        if(y==argho[i])
        {
            cout << "The index number is : " << i ;
        }
    }

    return 0 ;
}
