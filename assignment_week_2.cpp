//Nicholas Wachira 
//BCS-05-0056/2025
#include <iostream>
using namespace std;

int main() {
    string name;
    float hoursworked, rateperhour;
    float basicpay, tax, netpay;

    cout << "Enter employeename: ";
    cin >> employeename;

    cout << "Enter hoursworked: ";
    cin >> hoursworked;

    cout << "Enter rateperhour: ";
    cin >> rateperhour; 

    //calculate basicpay
    basicpay = hoursworked * rateperhour;

    //calculate tax
    if (basicpay > 50000) {
        tax = 0.20 * basicpay;
    } else if (basicpay >= 20000 && basicpay <=50000) {
        tax = 0.10 * basicpay;
    }else { 
        tax = 0;
    }

    //calculate netpay
    
    netpay = basicpay - tax;

    cout<< "Enter employeename:"<< employeename<<endl;
    cout<< "Enter hoursworked:"<< hoursworked<<endl;
    cout<< "Enter rateperhour:"<< rateperhour<<endl;
    cout<< "netpay:"<< netpay<<endl;



    return 0;
    
    
}