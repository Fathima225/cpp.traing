#include<iostream>
#include<cstring>
using namespace std;

class Movierating {
private:
	int rate;
	string genre;
	string title;
public:
	void setRate(int r)
	{
		rate = r;
	}
	int getRate()
	{
		return rate;
	}
	void setGenre(string g)
	{
		genre = g;
	}
	string getGenre()
	{
		return genre;
	}
	void setTitle(string t)
	{
		title = t;
	}
	string getTitle()
	{
		return title;
	}

	void movieDetails() {
		cout << "Enter Movie Title :" << endl;
		cin >> title;
		cout << "Enter Genre :" << endl;
		cin >> genre;
		cout << "Enter the rating out of 10:" << endl;
		cin >> rate;
	}

	void result()
	{
		if (rate >= 1 && rate <= 3) {
			cout << "Flop" << endl;
		}
		else if (rate >= 4 && rate <= 7) {
			cout << "Average" << endl;
		}
		else if (rate >= 8&& rate<=10) {
			cout << "Hit" << endl;
		}
		else {
			cout << "Enter correct rating" << endl;
		}
	}
};

int main() {
	Movierating m;
	m.movieDetails();
	m.result();
	return 0;

}