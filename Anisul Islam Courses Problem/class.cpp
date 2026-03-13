#include<iostream>
#include<string>
using namespace std;
struct book
{
    string title;
    string author;
    int price;
};

/*void displaydetails(string title,string author,int price)
{
    cout<<"Title is:"<<title<<endl;
    cout<<"Author is:"<<author<<endl;
    cout<<"Price is:"<<price<<endl;
}*/

int main()
{
    struct book book1;
    book1.title="bangla";
    cout<<book1.title<<endl;
    book1.author="humayan";
    cout<<book1.author;
}
