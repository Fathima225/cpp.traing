#include <iostream>
#include <string>
using namespace std;

int main() {
    int coins;
    cout << "Enter the total number of coins: ";
    cin >> coins;
    std::string coinStr = to_string(coins);
    int sum = 0;
    for (char digitChar : coinStr) {
        int digit = digitChar - '0';
        if (digit % 2 != 0) {
            sum += digit;
        }
    }
    cout << "The sum of odd digits is: " << sum << endl;
    return 0;
}