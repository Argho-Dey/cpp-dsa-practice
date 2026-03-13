//3. A person is eligible to vote if his/her age is greater than or equal to 18.
 // Define a function to find out if he/she is eligible to vote.

#include <iostream>

using namespace std;

bool eli_Vote(int age)
{
    return age >= 18;
}

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (eli_Vote(age))
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

