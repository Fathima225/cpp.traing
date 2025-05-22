
#include<iostream>
using namespace std;

class Atm {
private:
	float balance = 0;
	char accountHolder[30];
	float balance() {
		return balance;
	}
	float deposite(float d) {
		balance = balance + d;
		return balance;
	}
	float withdraw(float w) {
		balance = balance - w;
		return balance;
	}
	void setAccountholder(char* a)
	{
		strcpy(accountHolder, a);
	}
	char* getaccountholder()
	{
		return accountHolder;
	}
	void display()
	{
		cout << "1: Balance " << endl;
		cout << "2: Deposite " << endl;
		cout << "3: Withdraw " << endl;
		cout << "4: Exit <<endl " << endl;
		int options;
		cout << "Enter the option you want" << endl;
		cin >> options;
		switch (options)
		{
		case 1:
			cout << "1: Balance " << endl;
			cout << balance() << endl;
			break;
		case 2:
			cout << "2: Deposite " << endl;
			cout << deposite() << endl;
			break;
		case 3:
			cout << "3: Withdraw " << endl;
			cout << withdraw() << endl;
			break;
		case 4:
			cout << "4: Exit " << endl;
			break;
		default:
			cout << "Enter correct option" << endl;
			break;
			
		}
	}
};