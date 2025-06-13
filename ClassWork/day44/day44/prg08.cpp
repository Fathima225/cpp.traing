#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m;
bool flag = true;

void printfun(const string& word, bool isPing)
{
	for (int i = 0;i < 10;++i) {
		while (true) {
			m.lock();
			if (flag == isPing)
			{
				cout << word << endl;
				flag = !flag;
				m.unlock();
				break;
			
			}
			m.unlock();
		}
	}
}


int main()
{
	
	thread t1(printfun, "ping",true);
	thread t2(printfun, "pong",false);
	
	t1.join();
	t2.join();
	

	return 0;
}