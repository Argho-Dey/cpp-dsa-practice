//2. Write a program which will ask the user to enter his/her marks (out of 100).
// Define a function that will display grades according to the marks entered as below:

#include <iostream>
using namespace std;

void grade(int marks)
{
    if (marks >= 90)
    {
        cout << "A+" << endl;
    }
    else if (marks >= 85)
    {
        cout << "A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "B+" << endl;
    }
    else if (marks >= 75)
    {
        cout << "B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "C+" << endl;
    }
    else if (marks >= 65)
    {
        cout << "C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "D+" << endl;
    }
    else if (marks >= 50)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

int main()
{
    int marks;

    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    grade(marks);

    return 0;
}

