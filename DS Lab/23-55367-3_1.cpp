#include <iostream>
using namespace std;

int main()
{
    int ban[10];
    cout << "Enter the bandwidth usage: ";
    for (int i = 0; i < 10; ++i) {
        cin >> ban[i];
    }

    int maxSum=0;
    int startIndex=0;
    int c_Sum = 0;
    for (int i = 0; i < 3; ++i) {
        c_Sum += ban[i];
    }
    maxSum = c_Sum;

    for (int i = 3; i < 10; ++i) {
        c_Sum += ban[i] - ban[i - 3];
        if (c_Sum > maxSum) {
            maxSum = c_Sum;
            startIndex= i-2;

        }
    }
    cout<<"Max bandwidth usage"<< maxSum <<" during minute "<< startIndex+1<<" to "<< startIndex+3;
    return 0;
}
