//check prime number:
#include<iostream>
using namespace std;


int main() {
	int num;
	
	cout << "enter the number" << endl;
	cin >> num;

	for (int i = 2;i*i <= num;i++) {
		if( num%2==0) {
			cout << num << "the number is not prime" << endl;
		}
		else {
			cout<<num << "the number is  prime" << endl;
		}
		
	}

}