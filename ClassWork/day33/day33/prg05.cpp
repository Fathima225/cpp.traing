#include<iostream>
using namespace std;




template<class T>
class Box
{
private:
	T data;
public:
	Box(T value):data(value){}
	  void printData() { cout << "Data :" << data << endl;; }
};
int main()
{
	Box<int> intBox(10);
	Box<string>stringBox("abcd");

	intBox.printData();
	stringBox.printData();
	return 0;
}