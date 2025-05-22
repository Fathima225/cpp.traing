#include <iostream>
using namespace std;

struct Date 
{
	int day, month, year;
};
typedef struct address {
	int hNo;
	int pincode;
	string addressLine1;
	string addressLine2;
	string city;
	string state;
}ADDRESS;
struct Employee
{
	int id;
	string name;
	Date joiningDate;
	ADDRESS addr;
};

/*struct Employee
{
	int id;
	string name;
	struct Date{  //nested struct example
	int day,month,year;
	}D;
	ADDRESS addr;
};*/
int main()
{
	struct Employee e;

	e.id = 101;
	e.name = "bhima";
	e.joiningDate.day = 10;
	e.joiningDate.month = 4;
	e.joiningDate.year = 2025;
	e.addr.hNo = 54;
	e.addr.pincode = 6102600;
	e.addr.addressLine1 = "maettukuppam thoraipakam";
	e.addr.addressLine2 = "thoraipakkam ";
	e.addr.city = "chennai";
	e.addr.state = "TamilNamdu";

	cout << e.id << "\t" << e.name << "\t" << e.joiningDate.day << "\t" << e.joiningDate.month << "\t" << e.joiningDate.year << endl;
	cout << e.addr.hNo << "\t" << e.addr.pincode << "\t\t" << e.addr.addressLine1 << "\t\t" << e.addr.addressLine2 << "\t\t" << e.addr.city << "\t\t" << e.addr.state << endl;
	//e.D.day=10;
	return 0;
}