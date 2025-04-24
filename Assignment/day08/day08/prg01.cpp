/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;


    cin >> num;

    for (int i = 0;i <= num;i++)
    {
        for (int j = i;j <= num;j++)
        {
            if (isPrime(i) && isPrime(j))
            {
                if (i + j == num) {
                    cout << num << "=" << i << "+" << j << count++;
                }
            }
        }
    }


}