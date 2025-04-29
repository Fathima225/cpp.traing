#include <iostream>
using namespace std;

int sumOfN(int n) {
    if (n <= 0) {
        return 0;
    }
    else {
        return n + sumOfN(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sumOfN(n) << endl;
    return 0;
}