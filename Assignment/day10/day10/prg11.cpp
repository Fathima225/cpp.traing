#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;

    int lastDigit = firstNumber % 10;
    int firstDigit = secondNumber;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int newNumber = lastDigit * 10 + firstDigit;
    cout << "The new number is: " << newNumber << endl;

    return 0;
}