#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
    string dob;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter DOB (dd-mm-yy): ";
        cin >> dob;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "DOB: " << dob << endl;
    }


    void setId(int id) {
        this->id = id;
    }

    int getId() {
        return id;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }

    void setDob(string dob) {
        this->dob = dob;
    }

    string getDob() {
        return dob;
    }
};

double c_AverageSalary(Employee employees[], int n) {
    double totalSalary = 0.0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }
    return totalSalary / n;
}

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i + 1 << endl;
        employees[i].input();
    }

    cout << "Employee Details: "<<endl;
    for (int i = 0; i < n; i++) {
        employees[i].display();
        cout << endl;
    }

    double a_Salary = c_AverageSalary(employees, n);
    cout << "Average Salary: " << a_Salary << endl;

    return 0;
}
