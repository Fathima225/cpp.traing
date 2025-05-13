//pointers.NULL or nullptr => (void *)0;

#include<iostream>
using namespace std;
 
int main()
{
	int a = 10,b=30;
	char ch = 'A';
	float f = 10.5;

	//void* ptr=nullptr;
	int* ptr1 = nullptr;

	printf("\nAddress of a =%u and it value=%d\n", &a, a);
	printf("\nAddress of ch =%u and it value=%c\n", &ch, ch);
	printf("\nAddress of f =%u and it value=%f\n", &f, f);
	printf("\nAddress of ptr1 =%u and it value=%d\n", &ptr1, ptr1);


	a = 10;
	ptr1 = &a;
	printf("\nAddress of ptr1 =%u and it value=%d\n", &ptr1, ptr1);

	printf("\nptr1 is pointing to = %u", ptr1);
	//CO(ptr1)=>&a
	//CO(CO(ptr1))=>value of a =deference the pointer
	printf("\n%u is having a value stored as =%d\n", ptr1, *ptr1);


	ptr1 = &b;
	printf("\n%u is having a value stored as =%d\n", ptr1, *ptr1);

	*ptr1 = 101;
	printf("\nAddress of b =%u and it value =%d\n", &b, b);




	/*cout << "Address of a = " << (unsigned long int) & a << " and its value = " << a << endl;
	cout << "Address of ch = " << (unsigned long int) & ch << " and its value = " << ch << endl;
	cout << "Address of f = " << (unsigned long int) & f << " and its value = " << f << endl;
	cout << "Address of ptr = " <<  & ptr << " and its value = " << ptr << endl;*/
	return 0;
}