#include<iostream>
using namespace std;

int main() {
	int n=0;
	int a[] = { 10,20,30,10,3,4 };
	//int n = sizeof(a) / sizeof(a[0]);
	n = sizeof(a) / sizeof(a[0]);

	for (int i = 0;i < n;i++) 
	{
		for (int j = i;j < n;)
		{
			if (a[i] == a[j]) {
				for (int k = j;k < n - 1;k++) {
					a[k] = a[k + 1];
					n--;
				}
			}
			else
				j++;
			
			
			
		}
		
	}
	for (int i = 0;i < n;i++)
		cout << a[i];
	cout << endl;


	return 0;
	
}