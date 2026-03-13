#include<iostream>
using namespace std;

void oddrange(int x,int y){
    int sum=0;
    if((x%2==0) &&(y%2==0)){
    cout<<"Wrong input";}
   else  {
    for(int i=x;i<=y;i=i+2){
            cout<<i<<" ";
        }}}
int main(){
int arr[10];
int s_range;
int e_range;
cin>>s_range;
cin>>e_range;
oddrange(s_range,e_range);
return 0;}





