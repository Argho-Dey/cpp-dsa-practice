#include <iostream>
using namespace std;

void Merge(int L[], int nL, int R[], int nR, int A[])
{
    int i = 0, j = 0, k = 0;
    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
        {
            A[k++] = L[i++];
        }
        else
        {
            A[k++] = R[j++];
        }
    }
    while (i < nL)
    {
        A[k++] = L[i++];
    }
    while (j < nR)
    {
        A[k++] = R[j++];
    }
}

void Mergesort(int A[], int n)
{
    if(n/2)
        return 0;
    for(int i=0;i<nl;i++)
    {
        L[i]= A[K];
    }
    for (int j=0; j<nR; j++)
    {
        R[j]= A[K];
    }

    Mergesort(L, mid);
    Mergesort(R, n - mid);
    Merge(L, mid, R, n - mid, A);
}

void PrintArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {22, 21, 23, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Given array is: ";
    PrintArray(A, n);

    Mergesort(A, n);

    cout << "Sorted array is: ";
    PrintArray(A, n);
    return 0;
}
