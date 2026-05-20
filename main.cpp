#include <iostream>
#include <string>

using namespace std;

int main() {
    //1.Declare Variables
    string studentName;
    int marks;
    int attendance;
    string scholarshipStatus;
    cout << "Enter student name: ";
    cin >> studentName;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;
    // 2.Nested If-Else Statements to determine scholarship status
    If (marks>=70) {
        if (attendance >= 80) {
            scholarshipStatus = "Full Scholarship";
        } else {
            scholarshipStatus = "Partial Scholarship";
        }
        if (marks>=50) {
            if(attendance >=85) {
                scholarshipStatus = "Partial Scholarship";
            } else {
                scholarshipStatus = "No Scholarship";
            }
        } 
    } else {
        scholarshipStatus = "No Scholarship";
    }
    //3.Display the student's name and scholarship status
    cout << "\n=== SCHOLARSHIP RESULTS ===" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Scholarship Status: " << scholarshipStatus << endl;
    return 0;
    
}