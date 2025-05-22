#include<iostream>
using namespace std;

class Digitalclock {
private:
	int hours;
	int minutes;
	int seconds;

public:
	void setHour(int h)
	{
		hours = h;
	}
	int getHour()
	{
		return hours;
	}
	void setMinutes(int m)
	{
		minutes = m;
	}
	int getMinutes()
	{
		return minutes;
	}
	void setSeconds(int s)
	{
		seconds = s;
	}
	int getSeconds()
	{
		return seconds;
	}

	void tick()
	{
		seconds++;
		if (seconds == 60) {
			seconds = 0;
			minutes++;

		}
		if (minutes == 60)
		{
			minutes = 0;
			hours++;

		}
		if (hours == 24) {
			hours = 0;
		}

	}

	void display()
	{
		cout << "Hour" << hours << endl;
		cout << "Minutes" << minutes << endl;
		cout << "Seconds" << seconds << endl;
	}
};

int main()
{

	int h = 1;
	int m = 30;
	int s = 30;

	Digitalclock D1;
	D1.setHour(h);
	D1.setMinutes(m);
	D1.setSeconds(s);
	D1.tick();
	D1.display();
	cout << D1.getHour() << endl;
	cout << D1.getMinutes() << endl;
	cout << D1.getSeconds() << endl;
	return 0;
}
