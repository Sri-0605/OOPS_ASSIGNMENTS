#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double earning;
    double bonus;

public:
    // Function to input data
    void inputData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee earning: ";
        cin >> earning;
    }

    // Function to compute bonus
    void computeBonus() {
        if (earning >= 2000) {
            bonus = earning * 0.1; // 10% bonus
        } else {
            bonus = earning * 0.05; // 5% bonus
        }
    }

    // Function to output the desired information
    void outputData() {
        cout << "Employee Name: " << name << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {
    Employee emp;

    emp.inputData();
    emp.computeBonus();
    emp.outputData();

    return 0;
}