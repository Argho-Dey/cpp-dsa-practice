#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout <<"Enter a character ";
    cin >> ch;
    ch = tolower (ch);
    switch(ch)
    {
    case 'a':

    case 'e':

    case 'i':

    case 'o':

    case 'u':
        cout << "vowel";
        break;
    default:
        cout << "consonant";


    }
}
