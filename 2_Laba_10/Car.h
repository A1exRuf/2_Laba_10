#pragma once
#include <iostream>

using namespace std;

class Car
{
private:
	string brand;
	int power;
	float price;
public:
	Car();
	Car(string brand, int power, float price);
	Car(const Car& c);


	~Car();

	void setBrand(const string brand);
	void setPower(const int power);
	void setPrice(const float price);

	string getBrand() const;
	int getPower() const;
	float getPrice() const;

	void printInfo() const;

};

