#include<iostream>
using namespace std;
int main()
{
    double cel , far;
    cout<< "Enter celcious: " <<endl;
    cin>>cel;
    far=1.8*cel+32;
    cout<< "Farenhit: "<<far<<endl;
    cout<< "Entear farenhit: "<<endl;
    cin >> far;
    cel=(far-32)/1.8;
    cout<< "celcious: "<<cel ;
}
