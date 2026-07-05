#include <iostream>
using namespace std;

class Person {

protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name); 

        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Ignore the newline character left in the buffer
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    
};

class Student : public Person {

private:
    string admissionNumber;
    string studentclass;
    
public:
    void inputStudent() {
        inputPerson(); // Call the base class method to input name and age

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter class: ";
        getline(cin, studentclass);
    }

    void displayStudent() {
        displayPerson(); // Call the base class method to display name and age

        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentclass << endl;
    }
    
};

int main() {
    Student student;

    student.inputStudent();
    cout << "\n===== Student Details =====" << endl;    
    student.displayStudent();

    return 0;
}   
