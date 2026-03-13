#include <iostream>
#include <string>


using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
    string dob;
};

void inputStudent(Student s) {
    cout << "Enter ID, Name, CGPA, DOB (dd-mm-yy): ";
    cin >> s.id >> s.name >> s.cgpa >> s.dob;
}

void displayStudent() {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "CGPA: " << s.cgpa << endl;
    cout << "DOB: " << s.dob << endl;
}

void findProbation() {
    cout << "Students on probation: ";
    for (int i = 0; i < n; i++) {
        if (students[i].cgpa < 2.5) {
            displayStudent(students[i]);
        }
    }

    int searchStudent(int n, int id) {
        int low = 0, high = n - 1;
    while (low <= high) {
            int mid = low + (high - low) / 2;
    if (students[mid].student_id == id) {
            return mid;
    } else if (students[mid].student_id < id) {
        low = mid + 1;
        } else {
            high = mid - 1;
            }
            }

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        inputStudent(students[i]);
    }

    findProbation(students, n);

    return 0;
}
