#include <iostream>
using namespace std;
int main()
{
    int mark[5];
    for (int i=0; i<5 ; i++)
    {
        cout << "Enter mark for student-"<<i+1<< " :" ;
        cin >> mark [i];
    }
    for (int i=0; i<5; i++)
        cout << "Marks for student "<<i+1<< " is: " <<mark[i]<<endl;

}
