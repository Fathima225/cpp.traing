#include<iostream>
#include<thread>

using namespace std;

void greet()
{
	cout << "Hello World!" << endl;

}
void display(int x)
{
	cout << " X : " << x << endl;
}
void modifyX(int& x)
{
	x *= 2;
}
int main() {
	int val = 10;
	thread t1(greet);
	//before end of the programe
	t1.join();

	cout << "End of programe" << endl;
	//after the end of the programe
	//t1.join(); check here joinable or not
	thread t2(display, 101);//call by value
	t2.join();
	thread t3(modifyX, ref(val));//call by reference
	cout << "val: " << val << endl;
	t3.join();
	cout << "val: " << val << endl;

	return 0;
}