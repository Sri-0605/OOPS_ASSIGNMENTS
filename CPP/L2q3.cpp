#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int code;
    string designation;
    int yearsOfExperience;
    int age;

public:
    // Default constructor
    Employee() : name(""), code(0), designation(""), yearsOfExperience(0), age(0) {}

    // Parameterized constructor
    Employee(string n, int c, string d, int y, int a) : name(n), code(c), designation(d), yearsOfExperience(y), age(a) {}

    // Copy constructor
    Employee(const Employee& e) : name(e.name), code(e.code), designation(e.designation), yearsOfExperience(e.yearsOfExperience), age(e.age) {}

    // Destructor
    ~Employee() { cout << "Destroying employee record: " << name << endl; }

    // Getter methods
    string getName() { return name; }
    int getCode() { return code; }
    string getDesignation() { return designation; }
    int getYearsOfExperience() { return yearsOfExperience; }
    int getAge() { return age; }

    // Setter methods
    void setName(string n) { name = n; }
    void setCode(int c) { code = c; }
    void setDesignation(string d) { designation = d; }
    void setYearsOfExperience(int y) { yearsOfExperience = y; }
    void setAge(int a) { age = a; }

    // Static member function to count the number of employees
    static int count;
    static int getCount() { return count; }

    // Friend class to display employee records
    friend class EmployeeDatabase;

    // Inline function to display employee record
    inline void displayRecord() {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Age: " << age << endl;
    }
};

int Employee::count = 0;

class EmployeeDatabase {
public:
    Employee* employees;
    int size;

    // Constructor to initialize the database
    EmployeeDatabase(int s) : size(s) {
        employees = new Employee[s];
        for (int i = 0; i < s; i++) {
            employees[i] = Employee(); // Initialize with default constructor
        }
        Employee::count = s;
    }

    // Destructor to deallocate memory
    ~EmployeeDatabase() {
        delete[] employees;
        cout << "Destroying employee database" << endl;
    }

    // Method to add an employee record
    void addEmployee() {
        cout << "Enter employee name: ";
        string name;
        cin>>name;
        cout << "Enter employee code: ";
        int code;
        cin >> code;
        cout << "Enter designation: ";
        string designation;
        cin>>designation;
        cout << "Enter years of experience: ";
        int yearsOfExperience;
        cin >> yearsOfExperience;
        cout << "Enter age: ";
        int age;
        cin >> age;

        Employee e(name, code, designation, yearsOfExperience, age);
        employees[size - Employee::count] = e;
        Employee::count--;
    }

    // Method to display all employee records
    void displayRecords() {
        for (int i = 0; i < size; i++) {
            employees[i].displayRecord();
            cout << endl;
        }
    }
};

int main() {
    EmployeeDatabase db(1);

    cout << "Enter employee records:" << endl;
    for (int i = 0; i < 2; i++) {
        db.addEmployee();
    }

    cout << "Employee Records:" << endl;
    db.displayRecords();

    return 0;
}
