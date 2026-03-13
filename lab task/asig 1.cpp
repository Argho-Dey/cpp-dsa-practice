#include <iostream>
#include <string>

using namespace std;

struct Student
{
    int id;
    string name;
    float cgpa;
    int numberOfCreditsCompleted;


    void setData(int id, string name, float cgpa, int numberOfCreditsCompleted)
    {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
        this->numberOfCreditsCompleted = numberOfCreditsCompleted;
    }


    int getScholarshipPercent()
    {
        if (cgpa >= 3.85 && numberOfCreditsCompleted > 45)
        {
            return 30;
        }
        else if (cgpa >= 3.75 && numberOfCreditsCompleted > 45)
        {
            return 20;
        }
        else
        {
            return 0;
        }
    }


    void display()
    {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Number of Credits Completed: " << numberOfCreditsCompleted << endl;

        int scholarshipPercent = getScholarshipPercent();
        if (scholarshipPercent > 0)
        {
            cout << "Scholarship Percentage: " << scholarshipPercent << "%" << endl;
        }
        else
        {
            cout << "Not eligible for scholarship." << endl;
        }
    }
};

int main()
{
    Student student;


    int id, credits;
    float cgpa;
    string name;
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter student CGPA: ";
    cin >> cgpa;
    cout << "Enter number of credits completed: ";
    cin >> credits;


    student.setData(id, name, cgpa, credits);


    student.display();

    return 0;
}
