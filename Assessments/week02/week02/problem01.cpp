
#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n) {
    if (n < 0) {
        n = abs(n);
    }
    if (n == 0) {
        return true;
    }
    int numDigits = floor(log10(n)) + 1;
    int originalNumber = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    }
    else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}