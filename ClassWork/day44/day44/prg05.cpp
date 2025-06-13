#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

class counter
{
private:
	int x;
	mutex m;
public:
	counter():x(0){}
	void increment(const string tName) {
		
		for (int i = 0;i < 5;i++)
		{
			lock_guard<mutex>lock(m);
			//m.lock();
			x += 2;

			cout << "\n" << tName << " increment x by " << x << endl;

		}
	}
	int getX()
	{
		return x;
	}
};

int main()
{
	counter c;
	thread t1(&counter::increment, &c, "thread 1");
	thread t2(&counter::increment, &c, "thread 2");

	return 0;
}