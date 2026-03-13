#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum_arr[3][3];


    cout << "Enter the elements of the 3x3 array:"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum_arr[i][j] = 0;


            if (i > 0) {
                sum_arr[i][j] += arr[i - 1][j];
            }


            if (i < 2) {
                sum_arr[i][j] += arr[i + 1][j];
            }


            if (j > 0) {
                sum_arr[i][j] += arr[i][j - 1];
            }


            if (j < 2) {
                sum_arr[i][j] += arr[i][j + 1];
            }
        }
    }


    cout << "The resulting array is: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum_arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
