#include<iostream>
using namespace std;

class Student {
private:
	int rollno;
	char name[20];
	int phno;
	char address[50];
	int age;
	char dep[20];
public:
	void setName(char* s)
	{
		strcpy(name, s);
	}
	char* getName()
	{
		return name;
	}
	void setRollno(int r)
	{
		rollno = r;
	}
	int getRollno()
	{
		return rollno;
	}
	void setPhno(int p)
	{
		phno = p;
	}
	int getPhno()
	{
		return phno;
	}
	void setAddress(char* a)
	{
		strcpy(address, a);
	}
	char* getAddress()
	{
		return address;
	}
	void setAge(int ag)
	{
		age = ag;
	}
	int getAge()
	{
		return age;
	}
	void setDep(char* d) {
		strcpy(dep, d);
	}
	char* getDep()
	{
		return dep;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Rollno:" << rollno << endl;
		cout << "Phoneno:" << phno << endl;
		cout << "Address:" << address << endl;
		cout << "Age:" << age << endl;
		cout << "Dep:" << dep << endl;
	}
};

int main()
{
	char n[] = "fathima";
	int r = 1001;
	int phno = 1234567890;
	char adres[] = "chennai";
	int age = 23;
	char dep[] = "ECE";
	Student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setPhno(phno);
	s1.setAddress(adres);
	s1.setAge(age);
	s1.setDep(dep);
	s1.display();
	cout << s1.getRollno() << endl;
	cout << s1.getName() << endl;
	cout << s1.getPhno() << endl;
	cout << s1.getAddress() << endl;
	cout << s1.getAge() << endl;
	cout << s1.getDep() << endl;





	
	
	return 0;


}