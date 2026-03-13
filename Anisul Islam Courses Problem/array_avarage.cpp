#include <iostream>
using namespace std;
int main ()
{
    int n, sum=0;
    cout<< "Enter number of student: ";
    cin >>n;

    int mark[n];
    for (int i=0; i<n ; i++)
    {
        cout<<"Enter the mark for student "<< i+1 << " = ";
        cin >>mark [i];
        sum=sum+mark[i];
    }
    cout << "Total mark: "<< sum<<endl;
    float avag = (float)sum/n;
    cout << "Average marks are: "<< avag <<endl;
    int max= mark[0];
    for (int i=1; i<n; i++)
    {
        if (max<mark[i])
        {
            max=mark[i];
        }
    }
    int min= mark [0];
    for (int i=1; i<n ; i++)
    {
        if (min>mark[n])
            {
                min=mark[n];
            }
    }
    cout<<"maximum mark is "<<max<<endl;
    cout << "minimum mark is "<<min;

}
