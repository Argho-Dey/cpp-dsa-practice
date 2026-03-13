/*2. Create a C++ program to define a class ‘CAR’ with data members ‘brand’, ‘model’, ‘year’,
and member functions to display the car details. Create two object for the class and write
set and get methods for all the data members and also write a parameterized constructor.*/


#include <iostream>
#include <string>
using namespace std;
class CAR
{
private:
    string brand;
    string model;
    int year;

public:
    CAR(string brandName, string modelName, int modelYear)
    {
        brand = brandName;
        model = modelName;
        year = modelYear;
    }
    string getBrand() const
    {
        return brand;
    }
    void setBrand(const string& newBrand)
    {
        brand = newBrand;
    }
    string getModel() const
    {
        return model;
    }
    void setModel(const string& newModel)
    {
        model = newModel;
    }
    int getYear() const
    {
        return year;
    }
    void setYear(int newYear)
    {
        year = newYear;
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
    CAR car1("Toyota", "Camry", 2022);
    CAR car2("Honda", "Accord", 2023);
    cout << "Car 1 Details:"<< endl;
    car1.displayDetails();
    cout << endl;
    cout << "Car 2 Details:"<< endl;
    car2.displayDetails();
    cout << endl;
    car1.setBrand("Ford");
    car1.setModel("Mustang");
    car1.setYear(2024);

    cout << "Car 1 details after modification:" << endl;
    car1.displayDetails();

    return 0;
}
