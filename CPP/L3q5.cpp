#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
    string name;
    int code;
    string designation;
    int accountNumber;
    string dateOfJoining;
    double basicPay;
    double da, hra, cca;
    vector<string> deductions;
    double totalDeductions;

public:
    // Default constructor
    Employee() : name(""), code(0), designation(""), accountNumber(0), dateOfJoining(""), basicPay(0.0), da(0.0), hra(0.0), cca(0.0), totalDeductions(0.0) {}

    // Parameterized constructor
    Employee(string n, int c, string d, int an, string doj, double bp, double D, double h, double cc) :
        name(n), code(c), designation(d), accountNumber(an), dateOfJoining(doj), basicPay(bp), da(D), hra(h), cca(cc) {}

    // Copy constructor
    Employee(const Employee& e) : name(e.name), code(e.code), designation(e.designation), accountNumber(e.accountNumber), dateOfJoining(e.dateOfJoining), basicPay(e.basicPay), da(e.da), hra(e.hra), cca(e.cca), totalDeductions(e.totalDeductions) {}

    // Destructor
    ~Employee() {}

    // Member functions
    void addDeduction(string deduction) {
        deductions.push_back(deduction);
        totalDeductions += calculateDeduction(deduction);
    }

    double calculateDeduction(string deduction) {
        
     //Just as an example data considering fixed amount
        if (deduction == "PPF") return 1000.0;
        else if (deduction == "GPF") return 500.0;
        else if (deduction == "CPF") return 200.0;
        else if (deduction == "LIC") return 1500.0;
        else if (deduction == "NSS") return 500.0;
        else if (deduction == "NSC") return 1000.0;
        else return 0.0;
    }

    double calculateNetPay() {
        return basicPay + da + hra + cca - totalDeductions;
    }

    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Date of Joining: " << dateOfJoining << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "DA: " << da << endl;
        cout << "HRA: " << hra << endl;
        cout << "CCA: " << cca << endl;
        cout << "Deductions: ";
        for (string deduction : deductions) {
            cout << deduction << " ";
        }
        cout << endl;
        cout << "Total Deductions: " << totalDeductions << endl;
        cout << "Net Pay: " << calculateNetPay() << endl;
    }

    // Static member function
    static void displayEmployeeCount() {
        cout << "Total Employees: " << Employee::employeeCount << endl;
    }

    // Friend class
    friend class PayrollSystem;

private:
    static int employeeCount;
};

int Employee::employeeCount = 0;

class PayrollSystem {
private:
    vector<Employee*> employees;

public:
    PayrollSystem() {}

    ~PayrollSystem() {
        for (Employee* e : employees) {
            delete e;
        }
    }

    void addEmployee(Employee* e) {
        employees.push_back(e);
        Employee::employeeCount++;
    }

    void displayPayroll() {
        for (Employee* e : employees) {
            e->displayEmployeeDetails();
            cout << endl;
        }
    }
};

int main() {
    PayrollSystem payrollSystem;

    Employee* e1 = new Employee("lasya", 101, "Software Engineer", 123456, "2020-01-01", 50000.0, 10000.0, 5000.0, 2000.0);
    e1->addDeduction("PPF");
    e1->addDeduction("GPF");

     Employee* e2 = new Employee("tanu", 102, "Marketing Manager", 654321, "2018-06-01",50000.0, 70000.0, 15000.0, 7000.0);
      e2->addDeduction("PPF");
      e2->addDeduction("GPF");

      payrollSystem.addEmployee(e1);
      payrollSystem.addEmployee(e2);

      payrollSystem.displayPayroll();
      Employee::displayEmployeeCount();

      return 0;


}
