#include<iostream>
using namespace std;

class Student {
protected:
	int rollno;
	string name;
public:
	Student(int rollno, string name) {
		this->rollno = rollno;
		this->name = name;
	}
	void studentDisp() {
		cout << "rollno :" << rollno << endl;
		cout << "name :" << name << endl;
	}

	virtual void disp() = 0;
	

};
class Marks :public Student {
protected:
	int sub1;
	int sub2;
public:

	Marks(int rollno, string name, int sub1, int sub2) :Student(rollno, name) {
		this->sub1 = sub1;
		this->sub2 = sub2;
	}
	void markDisp() {
		cout << "sub1 :" << sub1 << endl;
		cout << "sub2 :" << sub2 << endl;
	}
};

class Sports:public Student {
protected:
	string basketBall;
public:
	Sports(int rollno, string name, string basketBall) :Student(rollno, name)
	{
		this->basketBall;
	}
	void sportsDisp() {
		cout << "basketball :" << basketBall << endl;
	}

};


int main() {

}