#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string bookTitle;
    string authorName;
    string publisher;
    int yearOfPublication;
    double price;

public:
    Book(string title, string author, string pub, int year, double cost)
    {
        bookTitle = title;
        authorName = author;
        publisher = pub;
        yearOfPublication = year;
        price = cost;
    }

    void setTitle(string title)
    {
        bookTitle = title;
    }
    void setAuthor(string author)
    {
        authorName = author;
    }
    void setPublisher(string pub)
    {
        publisher = pub;
    }
    void setYear(int year)
    {
        yearOfPublication = year;
    }
    void setPrice(double newPrice)
    {
        price = newPrice;
    }


    string getTitle()
    {
        return bookTitle;
    }
    string getAuthor()
    {
        return authorName;
    }
    string getPublisher()
    {
        return publisher;
    }
    int getYear()
    {
        return yearOfPublication;
    }
    double getPrice()
    {
        return price;
    }

    void displayBookDetails()
    {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << authorName << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
        cout << "Price: $" << price << endl;
    }


    double getPriceWithDiscount()
    {
        return price * 0.95;
    }
};

int main()
{
    Book book1("The Golden Year", "Ruskin Bond", "Harper Collins", 2023, 14.07);
    cout << "Book 1 Details:" << endl;
    book1.displayBookDetails();
    cout << endl;

    Book book2("", "", "", 0, 0.0);
    book2.setTitle("The Red and the Black");
    book2.setAuthor("Stendhal");
    book2.setPublisher("A. Levasseur");
    book2.setYear(1830);
    book2.setPrice(10.69);

    cout << "Book 2 Details:" << endl;
    book2.displayBookDetails();
    cout << endl;


    cout << "Book 1 price with 5% discount: $" << book1.getPriceWithDiscount() << endl;
    cout << "Book 2 price with 5% discount: $" << book2.getPriceWithDiscount() << endl;

    return 0;
}
