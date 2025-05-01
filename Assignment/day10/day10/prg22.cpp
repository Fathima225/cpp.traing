#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; 
    }
    return true;
}

int multiplyDigits(int num) {
    int product = 1;

    while (num > 0) {
        int digit = num % 10;
        product *= digit; 
        num /= 10; 
    }

    return product;
}

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    int product = multiplyDigits(number);

    if (isPrime(product)) {
        cout << "The box opens! The product of digits (" << product << ") is prime." << endl;
    }
    else {
        cout << "The box doesn't open. The product of digits (" << product << ") is not prime." << endl;
    }

    return 0;
}
