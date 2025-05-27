#include<iostream>
using namespace std;

class Vehicle {
protected:
	int wheel;
	int seats;
	string materials;
	string color;
	string modeOfCrtl;
public:
	Vehicle(int wheel, int seats, string materials, string color, string modeOfCrtl) {
		this->wheel = wheel;
		this->seats = seats;
		this->materials = materials;
		this->color = color;
		this->modeOfCrtl = modeOfCrtl;
	}
	void displayA() {
		cout << wheel << "\t" << seats << "\t" << materials << "\t" << color << "\t" << modeOfCrtl << endl;
	}

	
};


class Car:public Vehicle{
private:
	string brand;
	string fuelType;
	int doors;
	float price;
	string variantType;
	string model;
public:
	Car(int wheel, int seats, string materials, string color, string modeOfCrtl,string brand, string fuelType, int doors, float price, string variantType, string model):Vehicle(wheel,seats,materials,color,modeOfCrtl)  {
		this->brand = brand;
		this->fuelType = fuelType;
		this->doors = doors;
		this->price = price;
		this->variantType = variantType;
		this->model = model;
	}
	void displayB() {
		cout << brand << "\t" << fuelType << "\t" << doors << "\t" << price << "\t" << variantType << "\t" << model << endl;
	}

};
int main() {
	Car c(4,4,"steel","blue","driver","Audi","petrol",4,100000,"audi","model");
	c.displayA();
	c.displayB();
}