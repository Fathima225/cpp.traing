#include <iostream>
using namespace std;

bool isSumEven(int num1, int num2) {
    return (num1 + num2) % 2 == 0;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isSumEven(num1, num2)) {
        cout << "The sum of " << num1 << " and " << num2 << " is even." << endl;
    }
    else {
        cout << "The sum of " << num1 << " and " << num2 << " is odd." << endl;
    }

    return 0;
}