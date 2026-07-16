//Nicholas Wachira
//BCS-05-0056/2025

#include <iostream>
#include <string>
using namespace std;

int main() {

    string correctUsername = "admin";
    string correctPassword = "pass123";

    string enteredUsername;
    string enteredPassword;

    do {
        cout << "Enter username: ";
        cin >> enteredUsername;

        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredUsername == correctUsername && enteredPassword == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (enteredUsername != correctUsername || enteredPassword != correctPassword);

    return 0;
}