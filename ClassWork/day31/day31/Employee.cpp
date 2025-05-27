#include"Employee.h"

using namespace std;

//Employee::Employee()
//{
//	e_name = "Test";
//	e_id = 0;
//	e_phno = 0;
//	e_address = "address";
//}

void Employee::set_e_id(int e_id)
{
	this->e_id = e_id;
}
void Employee::set_e_name(string e_name)
{
	this->e_name = e_name;
}
void Employee::set_e_address(string e_address)
{
	this->e_address = e_address;
}
void Employee::set_e_phno(int e_phno)
{
	this->e_phno = e_phno;
}

int Employee::get_e_id()
{
	return e_id;
}
string Employee::get_e_name()
{
	return e_name;
}
string Employee::get_e_address()
{
	return e_address;
}
int Employee::get_e_phno()
{
	return e_phno;
}
