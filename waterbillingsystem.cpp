//Nicholas Wachira
//BCS-05-0056/2025
//Assignment week 3: water billing system

#include <iostream>
#include <string>
using namespace std;

void getCustomerDetails(string &name, double &unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> unitsConsumed;
}

double calculateBill(double unitsConsumed, double ratePerUnit) {
    double bill = unitsConsumed * ratePerUnit;
    return bill;
}

double applyDiscount(double unitsConsumed, double bill) {
    double discount = 0;

    if (unitsConsumed > 100) {
        discount = bill * 0.10;
    }

    return discount;
}

void displayBill(string name, double unitsConsumed, double billBeforeDiscount,
                  double discount, double finalAmount) {
    cout << " WATER BILL" << endl;
    cout << "Customer Name       : " << name << endl;
    cout << "Units Consumed      : " << unitsConsumed << endl;
    cout << "Bill Before Discount: Ksh " << billBeforeDiscount << endl;
    cout << "Discount Applied    : Ksh " << discount << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
}

int main() {
    string customerName;
    double unitsConsumed = 0;
    double ratePerUnit = 0;

    getCustomerDetails(customerName, unitsConsumed);

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
    double billBeforeDiscount = calculateBill(unitsConsumed, ratePerUnit);

    double discount = applyDiscount(unitsConsumed, billBeforeDiscount);

    double finalAmount = billBeforeDiscount - discount;

    displayBill(customerName, unitsConsumed, billBeforeDiscount, discount, finalAmount);

    return 0;
}
