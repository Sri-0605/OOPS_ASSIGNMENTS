#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double calls;
    double bill;

public:
    // Function to input data
    void inputData() {
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter number of calls made by customer: ";
        cin >> calls;
    }

    // Function to compute bill
    void computeBill() {
        if (calls <= 100) {
            bill =  200; 
        } else if(calls >100 && calls <=150){
             bill =  200+ (0.60* (calls-100)); 
        }else if(calls >150 && calls <=200){
             bill =  200+ (0.60* 50) +( 0.50*(calls-150)); 
        }else{
             bill =  200+ (0.60* 50) +( 0.50*150) +(0.40*(calls-200)); 
        }
    }

    // Function to output the desired information
    void outputData() {
        cout << "Name: " << name << endl;
        cout << "Telephone Bill: " << bill << endl;
    }
};

int main() {
    Employee emp;

    emp.inputData();
    emp.computeBill();
    emp.outputData();

    return 0;
}