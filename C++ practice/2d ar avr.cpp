#include <iostream>
using namespace std;

void initial (int B[3][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>B[i][j];

        }
    }
}
void displ (int B[3][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<B[i][j]<< " ";

        }cout <<endl;
    }
}

 int calsum (int B[3][3])


{
    int sum=0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            sum+=B[i][j];

        }
    }
    cout<<sum<<endl;
    cout<<"avg"<<sum/9;
}

int main()
{
    int D[3][3];
    initial(D);
    displ(D);
    calsum(D);

}
