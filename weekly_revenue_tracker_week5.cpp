#include <iostream>
using namespace std;

int main() {
    double revenue[7];
    double totalRevenue = 0;
    for (int day = 0; day < 7; day++) {
        cout << "Enter revenue for day " << (day + 1) << ": ";
        cin >> revenue[day];
    }

    for (int day = 0; day < 7; day++) {
        totalRevenue = totalRevenue + revenue[day];
    }

    double averageRevenue = totalRevenue / 7;

    cout <<"WEEKLY REVENUE REPORT" << endl;

    for (int day = 0; day < 7; day++) {
        cout << "Day " << (day + 1) << " Revenue: Ksh " << revenue[day] << endl;
    }

    cout << "Total Weekly Revenue : Ksh " << totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh " << averageRevenue << endl;

    return 0;
}