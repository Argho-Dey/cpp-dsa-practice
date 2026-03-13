#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string arr[100];
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<t; i++)
    {
        swap(arr[i],arr[t-i-1]);
    }
    for(int i=0; i<t; i++)
    {
        cout<<arr[i]<<endl;
    }


    return 0;
}
