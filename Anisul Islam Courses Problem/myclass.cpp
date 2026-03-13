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

    void value (int x,double y)
    {
        x=id;
        y=gpa;

    }

};
int main()
{
    student argho, arg;

    argho.value(3432, 3.3);
    argho. display();
    cout<<endl;

    arg.value (4654, 3.4);
    arg.display();
}
