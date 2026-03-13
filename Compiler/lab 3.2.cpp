#include <iostream>
using namespace std;

bool checkUnary(string s)
{

    if(s.length() != 3)
        return false;


    if(s[0]=='+' && s[1]=='+' && isalpha(s[2]))
        return true;


    if(s[0]=='-' && s[1]=='-' && isalpha(s[2]))
        return true;


    if(isalpha(s[0]) && s[1]=='+' && s[2]=='+')
        return true;


    if(isalpha(s[0]) && s[1]=='-' && s[2]=='-')
        return true;

    return false;
}

int main()
{
    string input;
    cout << "Enter expression: ";
    cin >> input;

    if(checkUnary(input))
        cout << "Valid Expression";
    else
        cout << "Invalid Expression";

    return 0;
}
