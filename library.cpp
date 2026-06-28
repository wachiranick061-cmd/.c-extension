#include <iostream>

using namespace std;

int main() {
    
    int bookID, dueDate, returnDate;
    int daysOverdue = 0; 
    int fineRate = 0;
    int fineAmount = 0;

    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date: ";
    cin >> dueDate;
    cout << "Enter Return Date: ";
    cin >> returnDate;

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        fineAmount = 0;
    }
    else if (daysOverdue <=7) {
        fineRate =20;
    }
    else i (daysOverdue <=14) {
        fineRate = 50;
    }
    else {
        fineRate = 100;
    }

    if (dayOverdue > 0) {
        fineAmount = daysOverdue * fineRate;
    }

    cout << "bookID: " << bookID << endl;
    cout << "dueDate: " << dueDate << endl;
    cout << "returnDate: " << returnDate << endl;
    cout << "daysOverdue: " << daysOverdue << endl;
    cout << "fineAmount: " << fineAmount << endl;
    cout << "fineRate: " << fineRate << endl;

    return 0;
}