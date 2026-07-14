//Nicholas Wachira 
//BCS-05-0056/2025
#include <iostream>
#include <string>
using namespace std;

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;

}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}


double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, double basicSalary, double overtimeHours,
                     double ratePerHour, double overtimePay, double netSalary) {
    cout << "               PAYSLIP" << endl;
    cout << "Employee Name   : " << name << endl;
    cout << "Basic Salary    : Ksh " << basicSalary << endl;
    cout << "Overtime Hours  : " << overtimeHours << endl;
    cout << "Rate Per Hour   : Ksh " << ratePerHour << endl;
    cout << "Overtime Pay    : Ksh " << overtimePay << endl;
    cout << "Net Salary      : Ksh " << netSalary << endl;
    
}

int main() {
    string employeeName;
    double basicSalary = 0.0;
    double overtimeHours = 0.0;
    double ratePerHour = 0.0;

    getEmployeeDetails(employeeName, basicSalary, overtimeHours);

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;

    double overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours, ratePerHour, overtimePay, netSalary);

    return 0;
}
