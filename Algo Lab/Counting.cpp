#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int A[], int B[], int n, int k)
{
    int C[k + 1] = {0};

    for (int j = 0; j < n; j++)
    {
        C[A[j]] = C[A[j]] + 1;

    }

    for (int i = 1; i <= k; i++)
    {
        C[i] = C[i] + C[i - 1];
    }

    for (int j = n - 1; j >= 0; j--)
    {
        B[C[A[j]] - 1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
}

int main()
{
    int A[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 8;
    int B[n];

    countingSort(A, B, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}


