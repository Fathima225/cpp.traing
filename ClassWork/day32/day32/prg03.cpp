#include<iostream>
using namespace std;
class A {
protected:
	int a;
	void dispAPtr() { cout << "A:method of protected" << endl; }
public:
	A() { a = 10; }
	void dispA() { cout << "A: a =" << a << endl; }

 };
class B :private A {
public:
	void dispB() {
		a = 30;
		dispAPtr();
		dispA();
	}
};

int main() {
	B objB;
	objB.dispB();
}