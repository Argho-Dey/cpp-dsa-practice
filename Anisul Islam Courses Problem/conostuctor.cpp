#include <iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;

    void display()
    {

        cout << id << "  "<<gpa<<endl;
    }

    student (int x,double y)
    {
        x=id;
        y=gpa;

    }
    student()
    {

        cout << "defult constuctou";
    }
};
int main()
{
    student argho(3432, 3.3);
    argho. display();
    cout<<endl;

    student arg (4568,3.6);
    arg.display();
}

