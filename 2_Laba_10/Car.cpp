#include "Car.h"

Car::Car()
{
	this->brand = "default";
	this->power = 0;
	this->price = 0;
}

Car::Car(string brand, int power, float price)
{
	this->brand = brand;
	this->power = power;
	this->price = price;
}

Car::Car(const Car& c)
{
	this->brand = c.brand;
	this->power = c.power;
	this->price = c.price;
}

Car::~Car()
{
}

void Car::setBrand(const string brand)
{
	this->brand = brand;
}

void Car::setPower(const int power)
{
	this->power = power;
}

void Car::setPrice(const float price)
{
	this->price = price;
}

string Car::getBrand() const
{
	return this->brand;
}

int Car::getPower() const
{
	return this->power;
}

float Car::getPrice() const
{
	return this->price;
}

void Car::printInfo() const
{
	cout << "Brand: " << this->getBrand() << endl;
	cout << "Power: " << this->getPower() << endl;
	cout << "Price: " << this->getPrice() << endl;
}
