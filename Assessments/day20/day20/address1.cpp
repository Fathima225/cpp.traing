//Basic address book for adding,deleting,updating,search and listing of all address via simple menu system



#include<iostream>
using namespace std;


struct address
{
	char name;
	char houseNo[100];
	char street, district, state;
};

int add(char);
int update(char);
int menu(int);
int display(char);
int del(char);
int search(char);
int list(char);

int add(char address)

{
	struct address a;
	
	cout << "enter the name" << endl;
	cin >> a.name;
	cout << "enter the houseNo" << endl;
	cin >> a.houseNo;
	cout << "enter the street" << endl;
	cin >> a.street;
	cout << "enter the district" << endl;
	cin >> a.district;
	cout << "enter the state" << endl;
	cin >> a.state;
	cout << "Address added successfully" << endl;
	cout << "Name :" << a.name << endl;
	cout << "HouseNo :" << a.houseNo << endl;
	cout << "Street :" << a.street << endl;
	cout << "district :" << a.district << endl;
	cout << "State :" << a.state << endl;
	return 0;

}

/*int update(char) {
	struct address b;
	cout << "enter the person name :" << endl;
	cin >> b.name;
	if (b.name == a.name) {

	}
	else {
		cout << "name not match " << endl;
	}
}*/

int menu(int n) {
	cout << "Enter your choice :" << endl;
	cin >> n;
	switch (n) {
	case 1:
		cout << add;
		break;
	case 2:
		cout << del;
		break;
	case 3:
		cout << update;
		break;
	case 4:
		cout << search;
		break;
	case 5:
		cout << list;
		break;
	default:
		cout << "Enter valid one" << endl;
		break;
	}
}
int display(char) {

}
int del(char) {

}
int list(char) {

}







int main()
{
	 add('a');
		return 0;
		menu('n');
		return 0;

}