#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    double basicSalary[5];
    double bonus[5];
    double totalSalary[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for employee " << (i + 1) << endl;

        cout << "Enter name: ";
        cin >> name[i];

        cout << "Enter basic salary: ";
        cin >> basicSalary[i];

        bonus[i] = 0.05 * basicSalary[i];

        totalSalary[i] = basicSalary[i] + bonus[i];
    }

    cout << "EMPLOYEE BONUS REPORT" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Employee " << (i + 1) << " Name  : " << name[i] << endl;
        cout << "Basic Salary       : Ksh " << basicSalary[i] << endl;
        cout << "Bonus              : Ksh " << bonus[i] << endl;
        cout << "Total Salary       : Ksh " << totalSalary[i] << endl;
    }

    return 0;
}