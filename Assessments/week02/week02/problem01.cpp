#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)

{
    int orgNum = num;
    int n = 0;
    int temp = num;
    while (temp != 0) 
    {
        n++;
        temp /= 10;

    }
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    return sum == orgNum;
}



int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) 
    {
       cout << num << " is an Armstrong number." <<endl;
    }
    else
    {
        cout << num << " is not an Armstrong number." <<endl;
    }

    return 0;
}
