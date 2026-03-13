#include <iostream>
using namespace std;
class teacher
{
    private:
    int teacherid;
    string teachername;
    double teachersalary;

public:
void setteacherid(int id)
{
    teacherid=id;
}
void setteachername(string name)
{
    teachername=name;
}
void setsalary(double salary)
{
    teachersalary=salary;
}
int getteacherid()
{
    return teacherid;
}
string getteachername()
{
    return teachername;
}
double getteachersalary()
{
    return teachersalary;
}
void display ()const
{
    cout<< "teaache id" <<teacherid<<endl;
    cout<<"teacher name"<<teachername<<end;
    cout <<"teacher saslary"<<teachersalary<<endl;
}
};
int main()
{
    teacher teacher1;
    teacher.setteacherid(2345);

     teacher.setteachername(aaa);



}
