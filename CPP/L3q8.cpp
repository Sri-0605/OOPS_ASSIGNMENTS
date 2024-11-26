#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
private:
    string name;
    string dateOfBirth;
    string bloodGroup;
    double height;
    double weight;
    string insurancePolicyNumber;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenceNumber;

public:
    // Default constructor
    Person() : height(0.0), weight(0.0) {}

    // Parameterized constructor
    Person(string n, string dob, string bg, double h, double w, string ipn, string ca, string tn, string dln) : name(n), dateOfBirth(dob), bloodGroup(bg), height(h), weight(w), insurancePolicyNumber(ipn), contactAddress(ca), telephoneNumber(tn), drivingLicenceNumber(dln) {}

    // Copy constructor
    Person(const Person& p) : name(p.name), dateOfBirth(p.dateOfBirth), bloodGroup(p.bloodGroup), height(p.height), weight(p.weight), insurancePolicyNumber(p.insurancePolicyNumber), contactAddress(p.contactAddress), telephoneNumber(p.telephoneNumber), drivingLicenceNumber(p.drivingLicenceNumber) {}

    // Destructor
    ~Person() {}

    // Member functions
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Weight: " << weight << " kilograms" << endl;
        cout << "Insurance Policy Number: " << insurancePolicyNumber << endl;
        cout << "Contact Address: " << contactAddress << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Driving Licence Number: " << drivingLicenceNumber << endl;
    }

    // Static member function
    static void displayPersonCount() {
        cout << "Total Persons: " << Person::personCount << endl;
    }

    // Friend class
    friend class PersonnelDatabase;

private:
    static int personCount;
};

int Person::personCount = 0;

class PersonnelDatabase {
private:
    vector<Person*> persons;

public:
    PersonnelDatabase() {}

    ~PersonnelDatabase() {
        for (Person* p : persons) {
            delete p;
        }
    }

    void addPerson(Person* p) {
        persons.push_back(p);
        Person::personCount++;
    }

    void displayPersonnelDatabase() {
        for (Person* p : persons) {
            p->displayPersonDetails();
            cout << endl;
        }
    }
};

int main() {
    PersonnelDatabase database;

    Person* p1 = new Person("LASYA", "2005-06-05", "B+", 1.75, 65.0, "IPN123", "122 GSHWV", "1234567890", "DLN123");
    Person* p2 = new Person("SANJHI", "2004-02-02", "O-", 1.60, 55.0, "IPN456", "456 CDHCI", "9876543210", "DLN456");
    Person* p3 = new Person("KRUPAL", "2004-03-03", "A+", 1.80, 70.0, "IPN789", "789 CDSKJHIW", "5551234567", "DLN789");

    database.addPerson(p1);
    database.addPerson(p2);
    database.addPerson(p3);

    database.displayPersonnelDatabase();

    Person::displayPersonCount();

    return 0;
}