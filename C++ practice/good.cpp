#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;


    if (x1 == x2 && y1 == y2)
    {
        cout << "0" << std::endl;
    }

    else if (x1 == x2 || y1 == y2)
    {
        cout << "1" << std::endl;
    }

    else
    {
        cout << "2" << std::endl;
    }

    return 0;
}
