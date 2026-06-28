#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string studentName;
    string admissionNumber;
    double feeBalance;

    void inputstudent(){
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }
    void makePayment(){
        double paymentAmount;
        cout << "Enter payment amount: ";
        cin >> paymentAmount;

        if (paymentAmount > 0) {
            feeBalance -= paymentAmount;
            cout << "Payment successful. Updated fee balance: " << feeBalance << endl;
        } else {
            cout << "Invalid payment amount. Please enter a positive value." << endl;  
        }
    }
    void displayStatus(){
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Fee Balance: " << feeBalance << endl;
        cout << "Remaining Balance:" <<feeBalance <<endl;
    }
   };


   int main() {
    Student student;
    student.inputstudent();
    student.makePayment();
    student.displayStatus();

    return 0;
   }