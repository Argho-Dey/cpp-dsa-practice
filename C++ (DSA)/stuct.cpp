#include <iostream>
using namespace std;
struct student
{
    int id;
    string name;
    double cgpa;
     void show()
     {
        cout<<"id is "<<id<<endl;
        cout<< "name is "<< name<<endl;
        cout<< "cgpa is "<< cgpa<<endl;

    
     }

};
int main()
{
  student s1;
  s1.id=2333;
  s1.name="argho";
  s1.cgpa=3.44;
  s1.show();  
}