#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {{12, 3}, {4, 5}};
    int largest = arr[0][0], secondLargest ;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] > largest)
            {
                secondLargest = largest;
                largest = arr[i][j];
            }
            else if (arr[i][j] > secondLargest && arr[i][j] != largest)
            {

                secondLargest = arr[i][j];
            }
        }
    }



    cout << "The largest number is: " << largest << endl;
    cout << "The second largest number is: " << secondLargest << endl;


    return 0;
}

