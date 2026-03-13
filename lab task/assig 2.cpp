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

    void setBookTitle(string title)
    {
        bookTitle = title;
    }

    string getBookTitle()
    {
        return bookTitle;
    }

    void setAuthorName(string author)
    {
        authorName = author;
    }

    string getAuthorName()
    {
        return authorName;
    }

    void setPublisher(string pub)
    {
        publisher = pub;
    }

    string getPublisher()
    {
        return publisher;
    }

    void setYearOfPublication(int year)
    {
        yearOfPublication = year;
    }

    int getYearOfPublication()
    {
        return yearOfPublication;
    }

    void setPrice(double cost)
    {
        price = cost;
    }

    double getPrice()
    {
        return price;
    }

    void displayBookDetails()
    {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author Name: " << authorName << endl;
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

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "Scribner", 1925, 12.99);


    cout << "Details of Book 1:" << endl;
    book1.displayBookDetails();
    cout << endl;

    Book book2("", "", "", 0, 0.0);
    book2.setBookTitle("To Kill a Mockingbird");
    book2.setAuthorName("Harper Lee");
    book2.setPublisher("J. B. Lippincott & Co.");
    book2.setYearOfPublication(1960);
    book2.setPrice(10.99);

    cout << "Details of Book 2:" << endl;
    cout << "Book Title: " << book2.getBookTitle() << endl;
    cout << "Author Name: " << book2.getAuthorName() << endl;
    cout << "Publisher: " << book2.getPublisher() << endl;
    cout << "Year of Publication: " << book2.getYearOfPublication() << endl;
    cout << "Price: $" << book2.getPrice() << endl;
    cout << endl;

    cout << "Price of Book 1 with 5% discount: $" << book1.getPriceWithDiscount() << endl;
    cout << "Price of Book 2 with 5% discount: $" << book2.getPriceWithDiscount() << endl;

    return 0;
}
