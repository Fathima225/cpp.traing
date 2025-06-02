#include<iostream>
using namespace std;

class B {
public:
	void printB() { cout << "printB" << endl; }
	virtual void disp(){ cout << "B" << endl; }

};
class D:public B {
public:
	void printD() { cout << "printD" << endl; }
	void disp() { cout << "D" << endl; }
};

int main()
{
	D d;
	d.printD();
	d.disp();

	B* ptr = new B;
	ptr->printB();
	ptr->disp();
	//upcasting
	//implicit and safe

	ptr = &d;
	ptr->printB();
	ptr->disp();
	
}