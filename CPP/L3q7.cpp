#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    int accessionNumber;
    string author;
    string title;
    int yearOfPublication;
    string publisher;
    double cost;

public:
    // Default constructor
    Book() : accessionNumber(0), yearOfPublication(0), cost(0.0) {}

    // Parameterized constructor
    Book(int an, string a, string t, int yop, string p, double c) : accessionNumber(an), author(a), title(t), yearOfPublication(yop), publisher(p), cost(c) {}

    // Copy constructor
    Book(const Book& b) : accessionNumber(b.accessionNumber), author(b.author), title(b.title), yearOfPublication(b.yearOfPublication), publisher(b.publisher), cost(b.cost) {}

    // Destructor
    ~Book() {}

    // Member functions
    void displayBookDetails() {
        cout << "Accession Number: " << accessionNumber << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Cost: " << cost << endl;
    }

    // Static member function
    static void displayBookCount() {
        cout << "Total Books: " << Book::bookCount << endl;
    }

    // Friend class
    friend class Library;

private:
    static int bookCount;
};

int Book::bookCount = 0;

class Library {
private:
    vector<Book*> books;

public:
    Library() {}

    ~Library() {
        for (Book* b : books) {
            delete b;
        }
    }

    void addBook(Book* b) {
        books.push_back(b);
        Book::bookCount++;
    }

    void displayBookCatalog() {
        for (Book* b : books) {
            b->displayBookDetails();
            cout << endl;
        }
    }
};

int main() {
    Library library;

    Book* b1 = new Book(1, "lasya", "Introduction to C++", 2010, "ABCD", 500.0);
    Book* b2 = new Book(2, "tanu", "Data Structures", 2015, "XYZW", 700.0);
    Book* b3 = new Book(3, "krupal", "Algorithms", 2012, "PQRS", 600.0);

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);

    library.displayBookCatalog();

    Book::displayBookCount();

    return 0;
}