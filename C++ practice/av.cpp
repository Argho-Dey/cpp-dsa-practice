#include <iostream>
using namespace std;

void intial (int A[3][3])
{
    cout << "Enter intiger";
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
    }
}
void displa (int A[3][3])
{
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<A[i][j] <<" ";
        }
        cout<<endl;
    }
}
int sa (int A[3][3])
{
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            sum+=A[i][j];
        }
    }
    cout<<"sum= "<<sum<<endl;
    cout << "Avg= "<<(double)sum/(3*3);
}
int main()
{
    int B[3][3];
    intial(B);
    displa(B);
    sa(B);
}
