#include<iostream>
using namespace std;

int main() {
	int n1 = 60, n2 = 70,r=0, q=0,count=0;
	

	while (true)
	{
		if (r == 0) {
			break;
			n2 = n1;
			n1 = r;
			count++;
		}
		
		
	}
	cout << count << endl;
	cout << n1 << endl;
	
	return 0;
}