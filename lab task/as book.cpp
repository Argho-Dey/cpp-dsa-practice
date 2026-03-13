#include <iostream>
#include <string>
using namespace std;
class Book
{
public:

    Book(const std::string& title, const std::string& author, const std::string& publisher, int year, double price) :
        bookTitle(title), authorName(author), publisher(publisher), yearOfPublication(year), price(price) {}


    void setTitle(const string title)
    {
        bookTitle = title;
    }
    void setAuthor(const string author)
    {
        authorName = author;
    }
    void setPublisher(const string pub)
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


    string getTitle() const
    {
        return bookTitle;
    }
    string getAuthor() const
    {
        return authorName;
    }
    string getPublisher() const
    {
        return publisher;
    }
    int getYear() const
    {
        return yearOfPublication;
    }
    double getPrice() const
    {
        return price;
    }

    // Display book details
    void displayBookDetails() const
    {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << authorName << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
        cout << "Price: $" << price << endl;
    }


    double getPriceWithDiscount() const
    {
        return price * 0.95;
    }

private:
    string bookTitle;
    string authorName;
    string publisher;
    int yearOfPublication;
    double price;
};

int main()
{

    Book book1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Pan Books", 1979, 12.99);


    cout << "Book 1 Details:" << endl;
    book1.displayBookDetails();
    cout << endl;


    Book book2("", "", "", 0, 0.0);
    book2.setTitle("The Lord of the Rings");
    book2.setAuthor("J.R.R. Tolkien");
    book2.setPublisher("Allen & Unwin");
    book2.setYear(1954);
    book2.setPrice(24.50);


    cout << "Book 2 Details:" << endl;
    book2.displayBookDetails();
    cout << endl;


    cout << "Book 1 price with 5% discount: $" << book1.getPriceWithDiscount() << endl;
    cout << "Book 2 price with 5% discount: $" << book2.getPriceWithDiscount() << endl;

    return 0;
}
