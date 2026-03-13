#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
    int numberOfCreditsCompleted;

    void setData(int id, string name, float cgpa, int numberOfCreditsCompleted) {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
        this->numberOfCreditsCompleted = numberOfCreditsCompleted;
    }

    int getScholarshipPercent() {
        if (cgpa >= 3.85 && numberOfCreditsCompleted > 45)
            return 30;
        else if (cgpa >= 3.75 && numberOfCreditsCompleted > 45)
            return 20;
        else
            return 0;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Number of Credits Completed: " << numberOfCreditsCompleted << endl;
        int scholarshipPercent = getScholarshipPercent();
        if (scholarshipPercent > 0)
            cout << "Scholarship: " << scholarshipPercent << "%" << endl;
        else
            cout << "Not eligible for scholarship." << endl;
    }
};

int main() {
    Student student;
    student.setData(1234, "John Doe", 3.9, 50);

    cout << "Student Information:" << endl;
    student.display();

    return 0;
}
