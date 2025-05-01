#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int setBits = countSetBits(number);
    cout << "Number of 1s in binary representation: " << setBits << endl;
    return 0;
}