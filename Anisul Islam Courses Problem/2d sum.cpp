#include <iostream>
using namespace std;
int main()
{
    int row,col,sum=0,num_element,avg;
    cout << " Enter the value of row: ";
    cin>> row;
    cout << "Enter the value of colum: ";
    cin >> col;
    int A[row][col];
    cout << "Enter the value of matrix "<<endl;
    for (int i=0; i<row; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            cout<< "A["<<i<<"]["<<j<<"] = ";
            cin>>A[i][j];
        }
    }
    for (int i=0; i<row; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            cout<<A[i][j] <<" ";
        }
        cout <<endl;

    }
    for (int i=0; i<row; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            sum=sum+A[i][j];
            num_element++;
        }
        cout <<endl;

    }
    avg=sum/num_element;
    cout<< "The row num is: "<<row<<endl;
    cout<< "The colum num is : "<<col<<endl;
    cout<<"The num of element is "<<num_element<<endl;
    cout <<"sum is "<<sum<<endl;
    cout << "avarage is "<< avg;


}
