#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n= ";
cin>>n;
cout<<"Enter the value of array "<<endl;
int arra[n];
for(int i=0;i<n;i++){
    cin>>arra[i];
}
    for(int i=n-1;i>=0;i--){
        cout<<arra[i]<<" ";
    }
}
