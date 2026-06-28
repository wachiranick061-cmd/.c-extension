//Nicholas Wachira
//BCS-05-0056/2025

#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    // Member function to display booking details
    void displayBooking() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Guest Name   : " << guestName << endl;
        cout << "Room Number  : " << roomNumber << endl;
        cout << "Days Booked  : " << daysBooked << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    // Create an object of the class
    RoomBooking booking("Alice Johnson", 101, 3);

    // Display booking details
    booking.displayBooking();

    return 0;
}