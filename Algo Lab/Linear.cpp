#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 8, 6, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;


    cout << "Enter the number to search: ";
   cin>>target;

   int result=-1;
   for(int i=0;i<size; i++)
   {

       if(arr[i]==target)
       {
           result=i;
           break;
       }
   }

   if(result!=-1)
     {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

