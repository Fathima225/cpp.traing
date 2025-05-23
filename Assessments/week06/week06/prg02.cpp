#include<iostream>
#include<cstring>
using namespace std;

class HotelRoom {
private:
	int roomNo;
	string type;
	bool isBooked;
public:
	HotelRoom(int rn, int t, int b) {
		roomNo = rn;
		type = t;
		isBooked = b;
	}

};