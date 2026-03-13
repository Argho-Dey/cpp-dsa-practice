#include <iostream>

using namespace std;

int main()
{

    int MAX_ROWS = 100;
    int MAX_COLS = 100;
    float arr[MAX_ROWS][MAX_COLS];


    int rows = 0, cols = 0;


    cout << "Enter floating-point numbers: " << endl;
    while (cin >> arr[rows][cols])
    {
        cols++;

        if (cin.peek() == '\n')
        {
            rows++;
            cols = 0;
            cin.ignore();
        }
    }


    float sum = 0.0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }


    float average = (rows > 0 && cols > 0) ? sum / (rows * cols) : 0.0;


    cout << "Number of rows: " << rows << endl;
    cout << "Number of columns: " << cols << endl;
    cout << "Sum of all elements: " << sum << endl;
    cout << "Average of all elements: " << average << endl;

    return 0;
}

