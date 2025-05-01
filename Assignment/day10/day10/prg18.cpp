#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int armyNumber;

    cout << "Enter the army number: ";
    cin >> armyNumber;

    if (isPerfect(armyNumber)) {
        cout << armyNumber << " is a perfect army number." << endl;
    }
    else {
        cout << armyNumber << " is not a perfect army number." << endl;
    }

    return 0;
}
