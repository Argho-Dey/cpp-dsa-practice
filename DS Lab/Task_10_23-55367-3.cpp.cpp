#include <iostream>

using namespace std;

int main()
{
    struct employ
    {
        int id;
        string joinDate;
        double salary;
    };

    employ em [5];
    for (int i=0;i<5;i++)
    {
        cin>>em[i].id;
        cin>>em[i].joinDate;
        cin>>em[i].salary;
    }
    for (int i=0;i<5;i++)
    {
        cout<<em[i].id<<" ";
        cout<<em[i].joinDate<< " " ;
        cout<<em[i].salary<< endl;
    }
}


