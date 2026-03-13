/*2. Create a C++ program to define a class ‘CAR’ with data members ‘brand’, ‘model’, ‘year’,
and member functions to display the car details. Create two object for the class and write
set and get methods for all the data members and also write a parameterized constructor.*/


#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    Car(const string& brand, const string& model, int year)
        : brand(brand), model(model), year(year) {}

    string getBrand() const
    {
        return brand;
    }
    string getModel() const
    {
        return model;
    }
    int getYear() const
    {
        return year;
    }

    void setBrand(const string& brand)
    {
        this->brand = brand;
    }
    void setModel(const string& model)
    {
        this->model = model;
    }
    void setYear(int year)
    {
        this->year = year;
    }

    void displayDetails() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car car1("Toyota", "Camry", 2023);
    Car car2("Honda", "Civic", 2022);

    cout << "Car 1 details:" << endl;
    car1.displayDetails();

    cout << "\nCar 2 details:" << endl;
    car2.displayDetails();

    car1.setBrand("Ford");
    car1.setModel("Mustang");
    car1.setYear(2024);

    cout << "\nCar 1 details after modification:" << endl;
    car1.displayDetails();

    return 0;
}
