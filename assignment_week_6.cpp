//Nicholas Wachira 
//BCS-05-0056/2025

#include <iostream>
#include <string>
using namespace std;

class book{
    public:
    string book_title;
    string author;
    int number_of_copies_available;
 
    void inputdetails(){
        cout << "Enter book title: ";
        getline(cin, book_title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> number_of_copies_available;
        
    }
    void borrowbook(){
        if (number_of_copies_available > 0){
            number_of_copies_available--;
            cout << "You have borrowed " << book_title << endl;
        }else{
            cout << book_title << "is currently unaavailable." << endl;
        }

        }
        void displaydetails(){
            cout << "Book Title: " << book_title << endl;
            cout << "Author: " << author << endl;
            cout << "Number of copies available: " << number_of_copies_available << endl;
        }
        
    };

    int main(){
        book mybook;
        mybook.inputdetails();
        mybook.displaydetails();
        mybook.borrowbook();
        mybook.displaydetails();

        return 0;
    }

