//find the factorial of number using loops
#include<iostream>
using namespace std;

int main()
{
	int n;
	int prd=1;
	cout << "Enter the number" << endl;
	cin >> n;
	for (int i = 1;i <=n;i++) {
		prd*= i;
	}
	cout << " factorial is " << prd << endl;

}