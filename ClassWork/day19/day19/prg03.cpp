#include<iostream>
using namespace std;


int main()
{

	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1]<<"\t" << a[2]<<"\t" << endl;

	int* ptr = nullptr;

	//ptr = &a[0];
	ptr = a;
	cout << *ptr << endl;
	*ptr = 101;
	

	//ptr =(ptr+1);//ptr+=1
	ptr++;
	cout << *ptr << endl;

	ptr = ptr + 1;
	cout <<" lest else "<< *ptr << endl;

	//ptr = ptr + 1;
	ptr++;
	cout << *ptr << endl;

	//ptr = ptr - 1;
	ptr--;
	cout << *ptr << endl;
	//ptr = ptr - 1;
	ptr--;
	cout << *ptr << endl;
	ptr--;
	cout << *ptr << endl;
	


	/*ptr = a + 2;
	cout << *ptr << endl;*/
	return 0;
}