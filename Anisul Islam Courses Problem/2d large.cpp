#include <iostream>
using namespace std;
int main()
{
    int large=0;
    int A[3][2]={{2,3},{4,5},{6,7}};
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<A[i][j]<<" ";

            if(large<A[i][j]){large=A[i][j];}
        }cout<<endl;
    }
    cout<<"The large number is: "<<large;
}
