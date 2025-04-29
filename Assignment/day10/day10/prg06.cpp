#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (n >= 10) {
        return sumDigits(sum);
    }
    else {
        return sum;
    }
}

int main() {
    int num;
    cout << "Enter the num:" << endl;
    cin >> num;
    int result = sumDigits(num);
    cout << result;
    return 0;
}