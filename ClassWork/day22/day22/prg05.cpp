//reverse array


#include<iostream>
using namespace std;

void revArr(int[], int);
void disArr(int[], int);

int main()
{

	int list[]={ 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "before" << endl;
	disArr(list, cap);
	cout << "After" << endl;
	revArr(list, cap);
	disArr(list, cap);


	return 0;
}

void disArr(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << "\t"<<a[i] << endl;
}

void revArr(int a[], int n)
{
	
	int t;
	for (int i = 0;i <= n / 2;i++)
	{
		t = a[i];
		a[i] = a[n-i-1];
		a[n - i - 1] = t;
	}
	
}