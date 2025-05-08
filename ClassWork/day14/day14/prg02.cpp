#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cout << "Enter five integer" << endl;
	cin >> a >> b >> c >> d >> e;
	int high = a;

	if (b > high)
	{
		high = b;

	}
	if (c > high)
	{
		high = c;

	}
	if (d > high)
	{
		high = d;

	}
	if (e > high)
	{
		high = e;
		
	 }
	cout << " high = " << high << endl;
	return 0;
	
}