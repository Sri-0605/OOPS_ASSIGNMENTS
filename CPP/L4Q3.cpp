#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double income;
    double taxdue;

public:
    // Function to input data
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter income: ";
        cin >> income;
    }

    // Function to compute tax
    void computeTax() {
        if (income <=100000) {
            taxdue = 0; 
        } else if(income >= 100001&& income <=150000){
            taxdue =  (income-100000) * 0.1; 
        }else if(income >= 150001&& income <=200000){
             taxdue =  (50000 * 0.1) + ((income-150000)*0.2); 
        }else{
             taxdue =  (50000 * 0.1) +(50000 * 0.2)+ ((income-200000)*0.3); 
        }
    }

    // Function to output the desired information
    void outputData() {
        cout << "Name: " << name << endl;
        cout << "Tax to be paid: " << taxdue << endl;
    }
};

int main() {
    Employee emp;

    emp.inputData();
    emp.computeTax();
    emp.outputData();

    return 0;
}