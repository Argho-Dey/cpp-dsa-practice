#include <iostream>
using namespace std;
int main ()
{
    int A[3][3]= {{5,3,2},{3,2,4},{5,6,7}};
    int B[3][3];
    int C[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< "B["<<i<< "]["<<j<<"]= ";
            cin>>B[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout << "A+B="<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j]<< " ";
        }
        cout<<endl;


    }
}
