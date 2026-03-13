#include <iostream>
using namespace std;


bool checkExpression(string s)
{
    int equalCount = 0;
    int operatorCount = 0;


    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '=')
            equalCount++;
    }


    if(equalCount != 1)
        return false;

    int pos = s.find('=');


    if(pos != 1 || !isalpha(s[0]))
        return false;


    for(int i = pos + 1; i < s.length(); i++)
    {

        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            operatorCount++;


        else if(!isalpha(s[i]))
            return false;


        if(i > pos + 1)
        {
            if(isalpha(s[i]) && isalpha(s[i-1]))
                return false;
        }
    }


    if(operatorCount > 2)
        return false;

    return true;
}

int main()
{
    string expression;

    cout << "Enter expression: ";
    cin >> expression;

    if(checkExpression(expression))
        cout << "Valid Expression";
    else
        cout << "Invalid Expression";

    return 0;
}
