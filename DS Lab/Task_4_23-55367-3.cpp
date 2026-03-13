#include<iostream>
using namespace std;
int arr1[3][3];
int arr2[3][3];
int arr3[3][3];
int s_arr[3][3];
int main(){
    for (int i = 0; i <3; i ++)
        {
            for(int j=0;j<3;j++){
                    cout<<"array 1=("<<i<< " ,"<<j<<")=";
                cin>>arr1[i][j];
            }}
  for (int i = 0; i <3; i ++) {
            for(int j=0;j<3;j++){
                    cout<<"array 2=("<<i<< " ,"<<j<<")=";
                cin>>arr2[i][j];
            }}
              for (int i = 0; i <3; i ++) {
            for(int j=0;j<3;j++){
                cout<<"array 3=("<<i<< " ,"<<j<<")=";
                cin>>arr3[i][j];
            }}
  for (int i = 0; i <3; i ++) {
            for(int j=0;j<3;j++){
                 s_arr[i][j]=arr1[i][j]+arr2[i][j]+arr3[i][j];
            }}
for (int i = 0; i <3; i ++) {
            for(int j=0;j<3;j++){
               cout<<s_arr[i][j]<<" ";
            }cout<<endl;}



    return 0;
}


