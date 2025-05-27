#include<iostream>
using namespace std;
class A {
private:
	int x;
protected:
	int y;
	void proMethod()
	{
		cout << "\t protect method called" << endl;
	}
public:
	A()
	{
		cout << "A constructor got called" << endl;
		x = 10;y = 20;
	}
	void dispA()
	{
		cout << "\t hello from a" << endl;
		cout << "\t x = " << x << "\ty = " << y << endl;
	}

};
class B: public A {
private :
	int a;
protected:
	int b;
public:
	B() {
		cout << "B constructor got called" << endl;
		a = 11;b == 22;
	}
	void dispB()
	{
		cout << "\t hello from B" << endl;
		cout << "a =" << a << "\tb = " << b << endl;
	}
	void protectB() {
		proMethod();
		y = 20;
	}
	};

int main()
{
	A objA;
	B objB;


	objA.dispA();
	objB.dispB();

	objB.protectB();
	return 0;
}