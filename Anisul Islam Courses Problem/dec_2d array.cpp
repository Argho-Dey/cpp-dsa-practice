#include <iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<< "Enter the element of array " <<endl;

    for (int i=0; i<2 ; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << "A["<<i<< "]["<<j<<"]= ";
            cin>> A[i][j];
        }
    }

    for (int i=0; i<2 ; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< A[i][j]<< " " ;
        }
        cout<<endl;
    }
}
