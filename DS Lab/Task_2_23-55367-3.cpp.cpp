#include<iostream>
using namespace std;
int main(){

int arr[5];
int even_counter=0;
int odd_counter=0;
for(int i=0;i<5;i++){
    cin>>arr[i];
}
for(int i=0;i<5;i++){
            if(arr[i]%2==0)
            even_counter++;
    else if (arr[i]%2==1) odd_counter++;


    }
    cout<<"EVEN ="<<even_counter<<endl<<"ODD="<<odd_counter;
}


