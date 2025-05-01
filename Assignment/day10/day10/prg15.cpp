#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter the hour value: ";
    cin >> hour;

    if (hour >= 1 && hour <= 12) {
        cout << "The clock will ring at the following minutes:" <<endl;
        for (int minute = 1; minute <= 60; ++minute) {
            if (hour % minute == 0) {
                cout << minute << " ";
            }
        }
        cout << endl;
    }
    else {
        cout << "Invalid hour value. Please enter an hour between 1 and 12." << endl;
    }

    return 0;
}