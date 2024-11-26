#include <iostream>
#include <string>

using namespace std;

class Publication{
public:
      string title;
      double price;
      string authorname;


     Publication(){}
     Publication(string t, double p, string a) : title(t), price(p), authorname(a) {}
     
     void displayData() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << authorname << endl;
    }
};

class Book:public Publication{
    private:
    int pcount;
    public:
    Book() {}
    Book(string t, double p, string a, int pc) : Publication(t, p, a), pcount(pc) {}

    void getData() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter author: ";
        cin>>authorname;
        cout << "Enter page count: ";
        cin >> pcount;
    }

     void displayData() {
        Publication::displayData();
        cout << "Page count: " << pcount << endl;
    }

};

class Ebook : public Publication {
private:
    string ptime;

public:
    Ebook() {}
    Ebook(string t, double p, string a, string pt) : Publication(t, p, a), ptime(pt) {}

    void getData() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter author: ";
        cin>>authorname;
        cout << "Enter playing time: ";
        cin >> ptime;
    }
 

    void displayData() {
        Publication::displayData();
        cout << "Playing time: " << ptime << endl;
    }
};

int main() {
    Book b;
    Ebook e;

    cout << "Enter book data:" << endl;
    b.getData();
    cout << "Book data:" << endl;
    b.displayData();

    cout << "\nEnter ebook data:" << endl;
    e.getData();
    cout << "Ebook data:" << endl;
    e.displayData();

    return 0;
}

