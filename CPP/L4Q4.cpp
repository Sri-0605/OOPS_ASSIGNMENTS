#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    string accountType;
    double balanceAmount;

public:
    // Constructor to initialize data members
    BankAccount(string name, int accountNo, string type, double balance) {
        accountHolderName = name;
        accountNumber = accountNo;
        accountType = type;
        balanceAmount = balance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balanceAmount += amount;
        cout << "Deposit successful. New balance: " << balanceAmount << endl;
    }

    // Function to withdraw amount 
    void withdraw(double amount) {
        if (balanceAmount >= amount) {
            balanceAmount -= amount;
            cout << "Withdrawal successful. New balance: " << balanceAmount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Function to display details of account holder
    void displayDetails() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance Amount: " << balanceAmount << endl;
    }
};

int main() {
    BankAccount account("Sanjhi", 123456789, "Savings", 1000.0);

    account.displayDetails();

    account.deposit(500.0);

    account.withdraw(200.0);

    account.displayDetails();

    return 0;
}