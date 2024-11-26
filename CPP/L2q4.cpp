#include <iostream>
#include <string>

using namespace std;

class Patient {
private:
    string name;
    char sex;
    int age;
    int wardNumber;
    int bedNumber;
    string natureOfIllness;
    string dateOfAdmission;

public:
    // Default constructor
    Patient() : name(""), sex(' '), age(0), wardNumber(0), bedNumber(0), natureOfIllness(""), dateOfAdmission("") {}

    // Parameterized constructor
    Patient(string n, char s, int a, int wn, int bn, string noi, string doa)
        : name(n), sex(s), age(a), wardNumber(wn), bedNumber(bn), natureOfIllness(noi), dateOfAdmission(doa) {}

    // Copy constructor
    Patient(const Patient& p) : name(p.name), sex(p.sex), age(p.age), wardNumber(p.wardNumber), bedNumber(p.bedNumber), natureOfIllness(p.natureOfIllness), dateOfAdmission(p.dateOfAdmission) {}

    // Destructor
    ~Patient() { cout << "Destroying patient record: " << name << endl; }

    // Getter methods
    string getName() { return name; }
    char getSex() { return sex; }
    int getAge() { return age; }
    int getWardNumber() { return wardNumber; }
    int getBedNumber() { return bedNumber; }
    string getNatureOfIllness() { return natureOfIllness; }
    string getDateOfAdmission() { return dateOfAdmission; }

    // Setter methods
    void setName(string n) { name = n; }
    void setSex(char s) { sex = s; }
    void setAge(int a) { age = a; }
    void setWardNumber(int wn) { wardNumber = wn; }
    void setBedNumber(int bn) { bedNumber = bn; }
    void setNatureOfIllness(string noi) { natureOfIllness = noi; }
    void setDateOfAdmission(string doa) { dateOfAdmission = doa; }

    // Static member function to count the number of patients
    static int count;
    static int getCount() { return count; }

    // Friend class to display patient records
    friend class PatientDatabase;

    // Inline function to display patient record
    inline void displayRecord() {
        cout << "Name: " << name << endl;
        cout << "Sex: " << sex << endl;
        cout << "Age: " << age << endl;
        cout << "Ward Number: " << wardNumber << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Nature of Illness: " << natureOfIllness << endl;
        cout << "Date of Admission: " << dateOfAdmission << endl;
    }
};

int Patient::count = 0;

class PatientDatabase {
public:
    Patient* patients;
    int size;

    // Constructor to initialize the database
    PatientDatabase(int s) : size(s) {
        patients = new Patient[s];
        for (int i = 0; i < s; i++) {
            patients[i] = Patient(); // Initialize with default constructor
        }
        Patient::count = s;
    }

    // Destructor to deallocate memory
    ~PatientDatabase() {
        delete[] patients;
        cout << "Destroying patient database" << endl;
    }

    // Method to add a patient record
    void addPatient(Patient p) {
        patients[size - Patient::count] = p;
        Patient::count--;
    }

    // Method to display all patient records
    void displayRecords() {
        for (int i = 0; i < size; i++) {
            patients[i].displayRecord();
            cout << endl;
        }
    }
};

int main() {
    PatientDatabase db(3);

    Patient p1("John Doe", 'M', 30, 1, 1, "Fever", "2022-01-01");
    Patient p2("Jane Doe", 'F', 25, 2, 2, "Cold", "2022-01-05");
    Patient p3("Bob Smith", 'M', 40, 3, 3, "Injury", "2022-01-10");

    db.addPatient(p1);
    db.addPatient(p2);
    db.addPatient(p3);

    db.displayRecords();

    return 0;
}

