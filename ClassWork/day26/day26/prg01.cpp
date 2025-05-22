#include<iostream>
#include<cstring>
using namespace std;

class student {
private:
	int rollno;
	char name[20];

public:
	void display()
	{
		//cout << "hello world " << str1 << endl;
		cout << "name:" << name << endl;
	}
	void setName(char *s) {
		//name = s;
		strcpy(name, s);
	}

};

int main()
{
	student s;
	char sName[] = "Fathima";
	cout << sizeof(s) << endl;
	s.display();
	s.setName(sName);
	s.display();
	return 0;
}