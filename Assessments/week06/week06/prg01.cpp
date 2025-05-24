//1. Flight Seat Reservation System
//Objective: Create a class to manage flight seat reservations.Each flight has a seat count and a record of bookings.#include<iostream>#include<cstring>using namespace std;class Flight {private:	string flightNumber;	int totalSeats;	int bookedSeats;public:	Flight(string fn, int totst) {		flightNumber = fn;		totalSeats = totst;		bookedSeats = 0;	}	void bookSeats(int t) {		if (bookedSeats + t <= totalSeats) {			bookedSeats += t;		}		else {			cout << "Booking Failed: Not enough seats." << endl;		}	}	void showAvailability()	{		int available = totalSeats - bookedSeats;		cout << "Flight:" << flightNumber << "|" << "Seats Available:" << available << endl;	}};int main(){
	Flight f1("AI203", 100);
	f1.bookSeats(30);

	f1.showAvailability();	f1.bookSeats(80);

	return 0;}