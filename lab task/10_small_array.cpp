//10. Write a function that can find the smallest value from an array.


#include <iostream>
using namespace std;

int f_Smallest(int arr[], int n)
{

    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s_Element = f_Smallest(arr, n);

    cout << "The smallest element in the array is: " << s_Element << endl;

    return 0;
}
