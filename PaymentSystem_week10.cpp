//Nicholas Wachira 
//BCS-05-0056/2025
//Nicholas Wachira 
//BCS-05-0056/2025

#include <iostream>
using namespace std;
class Payment {
public:
    void processPayment(int amount) {
        cout << "\n--- Cash Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Final Payment Amount: " << amount << endl;
    }

    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;
        cout << "\n--- Card Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction Fee: " << fee << endl;
        cout << "Final Payment Amount: " << finalAmount << endl;
    }
    void processPayment(double amount, double fee, double discount) {
        double finalAmount = amount + fee - discount;
        cout << "\n--- Mobile Payment ---" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction Fee: " << fee << endl;
        cout << "Discount: " << discount << endl;
        cout << "Final Payment Amount: " << finalAmount << endl;
    }
};

int main() {
    Payment payment;
    payment.processPayment(500);

    payment.processPayment(1200.00, 25.50);

    payment.processPayment(800.00, 10.00, 5.00);

    return 0;
}