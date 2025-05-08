#include<iostream>
using namespace std;

int main()
{
	int len=0,i;
	char arr[] = { "chennai" };
	int it = 0;
	while (arr[len] != '\0'){
		len++;
	}
	for (int i = 0;i <len/2;i++) {

		 char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
		//cout << it++ << endl;
		
	
	}cout << arr << endl;
	return 0;
	
}