#include <iostream>
using namespace std;

int main() {
    double balance;
    double withdrawalAmount;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter amount to withdraw: ";
    cin >> withdrawalAmount;

    while (withdrawalAmount <= balance && balance > 0) {
        
        balance = balance - withdrawalAmount;

        cout << "Withdrawal successful. Remaining balance: Ksh " << balance << endl;

        if (balance == 0) {
            cout << "Balance is now zero. No more withdrawals allowed." << endl;
            break;
        }

        cout << "\nEnter amount to withdraw: ";
        cin >> withdrawalAmount;
    }

    if (balance > 0 && withdrawalAmount > balance) {
        cout << "\nWithdrawal amount is greater than balance. Transaction stopped." << endl;
    }

    return 0;
}