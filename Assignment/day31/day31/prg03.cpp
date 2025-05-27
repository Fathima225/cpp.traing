#include<iostream>
using namespace std;

class Vehicle {
protected:
	int vehicleId;
	string type;
	int ratePerKm;
public:
	Vehicle(int vehicleId, string type, int ratePerKm) {
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm = ratePerKm;
	}

};

class Cars :public Vehicle {
protected:
	int distance;
	int days;
public:
	Cars(int vehicleId, string type, int ratePerKm, int distance, int days) :Vehicle(vehicleId, type, ratePerKm) {
		this->distance = distance;
		this->days = days;

	}
};

class Bike :public Vehicle {
protected:
	int distance;
	int days;
public:
	Bike(int vehicleId, string type, int ratePerKm, int distance, int days) :Vehicle(vehicleId, type, ratePerKm) {

	}

	int calculateFare()
	{
		int fareNoDis = ratePerKm * distance;
		cout << "Fare without discount :" << fareNoDis << endl;

		
			int fareDis = ratePerKm * distance - 150;

			cout << "Fare with long-term discount :" << fareDis << endl;
		
		
		return fareDis;
		
	}
	void display() {
		
		calculateFare();
	}

	
};

int main() {
	Bike B(101,"car", 15,100,3);
	B.display();
}