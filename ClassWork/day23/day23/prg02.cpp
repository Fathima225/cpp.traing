#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(1024*9999999999);
	if(ptr !=NULL){
	int* temp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;


	ptr = temp;
	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;

	cout << endl;

	ptr = temp;
	free(temp);
}
else
cout << "memory failed to allocate" << endl;

	/*cin >> *ptr;
	ptr++;
	ptr = temp;
	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;*/
	
	/*valgrid=mem leaks*/
	return 0;

}
