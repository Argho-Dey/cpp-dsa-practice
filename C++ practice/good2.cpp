#include <iostream>
#include <algorithm>

using namespace std;

int minFee(int x1, int y1, int x2, int y2)
{

    int dx = min(abs(x1 - x2), abs(x1) + abs(x2));
    int dy = min(abs(y1 - y2), abs(y1) + abs(y2));


    return dx + dy;
}

int main()
{
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;


    if (x1 == 0 || y1 == 0 || x2 == 0 || y2 == 0)
    {

        return 1;
    }

    int fee = minFee(x1, y1, x2, y2);
    cout << fee << endl;

    return 0;
}

