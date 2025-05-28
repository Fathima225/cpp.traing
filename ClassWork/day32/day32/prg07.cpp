#include<iostream>
using namespace std;

class Vehicle {
protected:
	float price;
public:
	Vehicle(float price) {
		this->price = price;
	}
	void displayV() {
		cout << "Price : " << price << endl;
	}
};

class Car:public Vehicle {
protected:
	int seatingCap;
	int noofDoors;
	string fuelType;
public:
	Car(float price,int seatingCap, int noofDoors, string fuelType):Vehicle(price){
		this->seatingCap = seatingCap;
		this->noofDoors = noofDoors;
		this->fuelType = fuelType;
	}
	void displayC() {
		displayV();
		cout << "seatingCap :" << seatingCap << endl;
		cout << "noofDoors :" << noofDoors << endl;
		cout << "fuelType :" << fuelType << endl;
	}
};
class Motorcycle :public Vehicle {
protected:
	int noofCylinder;
	int noofGeers;
	int noofWheels;
public:
	Motorcycle(float price, int noofCylinder, int noofGeers, int noofWheels) :Vehicle(price) {
		this->noofCylinder = noofCylinder;
		this->noofGeers = noofGeers;
		this->noofWheels = noofWheels;
	}
	void displayM() {
		displayV();
		cout << "noofCylinder :" << noofCylinder << endl;
		cout << "noofGeers :" << noofGeers << endl;
		cout << "noofWheels :" << noofWheels << endl;
	}

};

class Audi :public Car {
protected:
	string modeltype;
public:
	Audi(float price, int seatingCap, int noofDoors, string fuelType, string modeltype) :Car(price, seatingCap, noofDoors, fuelType)
	{
		this->modeltype = modeltype;
	}
	void displayA() {
		cout << "Audi Car Details :" << endl;
		displayC();
		cout << "modeltype : " << modeltype << endl;
	}
};

class Yamaha :public Motorcycle {
protected:
	string maketype;
public:
	Yamaha(float price, int noofCylinder, int noofGeers, int noofWheels, string maketype) :Motorcycle(price, noofCylinder, noofGeers, noofWheels)
	{
		this->maketype = maketype;
	}
	void displayY() {
		cout << "Yamaha Details :" << endl;
		displayM();
		cout << "maketype :" << maketype << endl;
	}
};

int main()
{
	Audi a(100000, 4, 4, "diesel", "A4");
		a.displayA();
		cout << endl;
		Yamaha y(400000,1,4,4,"A3");
		y.displayY();
}