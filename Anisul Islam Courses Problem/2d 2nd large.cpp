#include <iostream>
using namespace std;
int main()
{

    int A[2][2]={{12,3},{7,5}};
    int large=A[0][0],large_2;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<A[i][j]<< " ";
            if(large<A[i][j])
            {
                large_2=large;

                large=A[i][j];

            }   else if (large_2<A[i][j]&&A[i][j]<large)
            {
                large_2=A[i][j];
            }

        }cout<<endl;
    }
    cout<< "The large number is: "<<large<<endl;
    cout << "The 2nd large num is: "<<large_2 <<endl;
}
