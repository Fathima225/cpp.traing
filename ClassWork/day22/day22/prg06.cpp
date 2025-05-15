//revers array using pointer
#include<iostream>
using namespace std;

void revArr(int*, int);

void revArr(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;

		start++;
		end--;
	}
}

void disArr(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << "\t" << a[i] << endl;
}



int main()
{

	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "before" << endl;
	disArr(list, cap);
	cout << "After" << endl;
	revArr(list, cap);
	disArr(list, cap);


	return 0;
}