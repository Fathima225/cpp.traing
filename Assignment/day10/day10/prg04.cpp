#include <iostream>
using namespace std;

int countZerosRecursive(int n, int count = 0) {
    if (n == 0) {
        return count;
    }
    
    int lastDigit = n % 10;
    if (lastDigit == 0) {
        count++;
    }
    
    return countZerosRecursive(n / 10, count);
}

int main() {
    int number = 102040;
    int zeroCount = countZerosRecursive(number);
   cout << "Number of zeros in " << number << " is: " << zeroCount <<endl;
    return 0;
}