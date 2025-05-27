
#include<iostream>
#include"Employee.h"
using namespace std;






int main()
{
	Employee empObj;

	empObj.set_e_id(1011);
	empObj.set_e_phno(9900);
	empObj.set_e_name("fathima");
	empObj.set_e_address("chennai");



	cout << "name" << empObj.get_e_name() << endl;
	return 0;
}