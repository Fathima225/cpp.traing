#include <iostream>
#include <cmath>
using namespace std;

int highestPowerOfTwo(int reading) {
    if (reading <= 0) {
        return 0;  
    }

    int power = 1;
    while (power * 2 <= reading) {
        power *= 2;
    }

    return power;
}

int main() {
    int energyReading;

    cout << "Enter the energy reading: ";
    cin >> energyReading;

    int result = highestPowerOfTwo(energyReading);
    cout << "The highest power of 2 less than or equal to " << energyReading << " is: " << result << endl;

    return 0;
}
