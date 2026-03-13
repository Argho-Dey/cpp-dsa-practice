//9. Write a function that can find the biggest element from an array.


#include <iostream>
using namespace std;

int f_Biggest(int arr[], int size)
{

    int biggest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
        }
    }

    return biggest;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int b_Element = f_Biggest(arr, n);

    cout << "The biggest element is: " << b_Element << endl;

    return 0;
}
