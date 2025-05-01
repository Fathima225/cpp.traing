#include <iostream>
using namespace std;

bool isFirstNonZeroEven(int code) {
    while (code != 0) {
        int digit = code % 10;
        if (digit != 0) {
            return (digit % 2 == 0);
        }
        code /= 10; 
    }
    return false; 
}

int main() {
    int code;

    cout << "Enter the secret code: ";
    cin >> code;

    if (isFirstNonZeroEven(code)) {
        cout << "The first non-zero digit is even." << endl;
    }
    else {
        cout << "The first non-zero digit is not even." << endl;
    }

    return 0;
}
