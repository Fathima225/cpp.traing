#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of times you press the button: ";
    cin >> n;

    int currentNumber = 1;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += currentNumber;  
        currentNumber *= 2;    
    }

    cout << "The sum of all numbers you see after " << n << " presses is: " << sum << endl;

    return 0;
}
