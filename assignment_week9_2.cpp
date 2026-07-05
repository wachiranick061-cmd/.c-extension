//Nicholas Wachira
//BCS-05-0056/2025
#include <iostream>
using namespace std;   

class Vehicle{
    
    private:
        string brand;
        int year_of_manufacture;
    public:
        void inputVehicle(){
            cout << "Enter brand: ";
            getline(cin, brand);

            cout << "Enter year of manufacture: ";
            cin >> year_of_manufacture;
            cin.ignore(); // Ignore the newline character left in the buffer
        }

        void displayVehicle(){
            cout << "Brand: " << brand << endl;
            cout << "Year of Manufacture: " << year_of_manufacture  << endl;
        }
};

class Car : public Vehicle{
    
    private:
        int number_of_doors;
        float engine_capacity;
    public:
        void inputCar(){
            inputVehicle(); // Call the base class method to input brand and year of manufacture

            cout << "Enter number of doors: ";
            cin >> number_of_doors;
            cin.ignore(); // Ignore the newline character left in the buffer

            cout << "Enter engine capacity: ";
            cin >> engine_capacity;
            cin.ignore(); // Ignore the newline character left in the buffer    
        }

        void displayCar(){
            displayVehicle(); // Call the base class method to display brand and year of manufacture

            cout << "Number of Doors: " << number_of_doors << endl;
            cout << "Engine Capacity: " << engine_capacity << endl;
        }
};

int main() {
    Car myCar;
    myCar.inputCar();
    cout << endl << "\n===== Car Details =====" << endl;
    myCar.displayCar();

    return 0;
}