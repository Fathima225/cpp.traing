#include<iostream>
#include<thread>
#include<mutex>
#include<fstream>
#include<vector>

using namespace std;

class Auction {
private:
	string bidderName;
	int id;
	double maxPrice;
	double minPrice;
public:
	Auction(string bidderName, int id, double maxPrice, double minPrice) {
		this->bidderName = bidderName;
		this->id = id;
		this->maxPrice = maxPrice;
		this->minPrice = minPrice;

	}
	void display()
	{
		cout << "BidderName :" << bidderName << endl;
		cout << "ID :" << id << endl;
		cout << "Maximum Price :" << maxPrice << endl;
		cout << "Minimum Price :" << minPrice << endl;
	}
	void auction1(string& name, double biddingAmt)
	{ 
		if (biddingAmt<minPrice)
		{
			cout << "Not eligible for bidding" << endl;
		}
		else if(biddingAmt<=maxPrice)
		{
			cout << "Not eligible for bidding" << endl;
		}
		maxPrice = biddingAmt;
		cout << "bidder amount is eligible" << endl;
		bidderName = name;
		cout << "Name is matched" << endl;
	}
};

int main()
{
	Auction a("fathima", 101, 10000, 5000);
	a.display();

}