
/* Program to evaluate simple expressions of the form
number operator number */
#include <iostream>
using namespace std;
int main ()
{
    float value1, value2;
    char opera;
    cout << "Type in your expression" <<endl;
    cin >>value1 >>opera >>value2;
    if ( opera == '+' )
        cout<<value1 + value2<<endl;
    else if ( opera == '-' )
        cout<<value1 - value2<<endl;
    else if ( opera == '*' )
        cout<<value1 * value2<<endl;
    else if ( opera == '/' )
        cout<<value1 / value2<<endl;
    else cout<<"Unknown operator.";
    return 0;
}
