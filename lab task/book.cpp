/* 1. Write a C++ program to define a structure “BOOK” to represent
a book with data members ‘Title’,
‘Author’, ’Price’, and member
function to display book details and calculate the discounted price. */


#include <iostream>
#include <string>
using namespace std;
struct BOOK {
    string Title;
    string Author;
    double Price;
    void displayDetails() {
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: $" << Price << endl;
    }
    double calculateDiscountedPrice(double discountRate) {
        return Price - (Price * discountRate / 100.0);
    }
};

int main() {
    BOOK book1;
    book1.Title = "The Great Gatsby";
    book1.Author = "F. Scott Fitzgerald";
    book1.Price = 15.99;
    book1.displayDetails();
    double discountRate = 10.0;
    double discountedPrice = book1.calculateDiscountedPrice(discountRate);
    cout << "Discounted Price: $" << discountedPrice << endl;

    return 0;
}
