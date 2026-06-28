//Nicholas Wachira 
//BCS-05-0056/2025

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

    // Member function to display account details
    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    BankAccount account("Alice Wanjiru", 100234, 5000.00);
    account.displayAccount();

    return 0; // Destructor called automatically here
}