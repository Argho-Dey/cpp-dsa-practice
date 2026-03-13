#include <iostream>

using namespace std;

int maxTemperatureDifference(int grid[][10], int rows, int cols) {
    int maxDiff = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (j + 1 < cols) {
                maxDiff = max(maxDiff, abs(grid[i][j] - grid[i][j + 1]));
            }


            if (i + 1 < rows) {
                maxDiff = max(maxDiff, abs(grid[i][j] - grid[i + 1][j]));
            }
        }
    }

    return maxDiff;
}

int main() {
    int grid[3][10] = {
        {10, 20, 30, 40, 50},
        {25, 35, 45, 55, 65},
        {30, 40, 50, 60, 70}
    };

    int rows = 3, cols = 5;

    int maxDiff = maxTemperatureDifference(grid, rows, cols);
    cout << "Maximum temperature difference: " << maxDiff << endl;

    return 0;
}
