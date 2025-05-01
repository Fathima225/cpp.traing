#include <iostream>
using namespace std;


int main()
{
	int a, b, c;
	int s;
	cout << "Enter three angles:" << endl;
	cin >> a >> b >> c;
	s = a + b + c;
	if (s == 180) {
		cout << "the angles form a valid triangle.";
	}
	else {
		cout << "the angles do not form a valid triangle.";
	}
}