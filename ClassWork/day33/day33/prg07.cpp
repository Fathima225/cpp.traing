#include<iostream>
using namespace std;

template<class T1,class T2>
class Calculator
{
private:

	T1 data1;
	T2 data2;
public:
	Calculator(T1 v1, T2 v2) :data1(v1), data2(v2) {}
	void add(T1 data1,T2 data2) {
		cout << "data1: " << data1 << " data2: " << data2 << " Add = " << data1+data2 << endl;
	}
	void sub(T1 data1, T2 data2) {
		cout << "data1: " << data1 << " data2: " << data2 << " Sub = " << data1-data2<< endl;
	}
	void mul(T1 data1, T2 data2) {
		cout << "data1: " << data1 << " data2: " << data2 << " Mul = " << data1*data2 << endl;
	}
	void div(T1 data1 , T2 data2) {
		cout << "data1: " << data1 << " data2: " << data2 << " Div = " << data1/data2 << endl;
	}

};

int main() {
	Calculator<int, int> objc(6, 2);
	objc.add(6, 2);
	objc.sub(6, 2);
	objc.mul(6, 2);
	objc.div(6, 2);
}