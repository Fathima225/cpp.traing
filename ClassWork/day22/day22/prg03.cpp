//max of two number.

#include<iostream>
using namespace std;

int max2num(int *, int *);


int main()
{
	int v1 = 20,v2 = 10;
	cout << max2num(&v1, &v2) << endl;
}

int max2num(int* x, int* y)
{
	return((*x > *y) ? *x : *y);
}

/*int main()
{
	int *ptr1,*ptr2 = nullptr;
	
	int a = 20, b = 10;
	 ptr1 = &a;
	cout << *ptr1 << endl;
	ptr2 = &b;
	cout << *ptr2 << endl;
	if (*ptr1 > *ptr2) {
		cout << *ptr1 << " is maximum num " << endl;
	}
	else {
		cout << "small" << endl;
	}
	return 0;
}*/
