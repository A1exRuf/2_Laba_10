#include "CarArray.h"

CarArray::CarArray(int n)
{
	this->n = n;
    arr = new Car[n];
}

CarArray::~CarArray()
{
    delete [] arr;
}

void CarArray::input()
{
    string brand;
    int power;
    float price;
    for (int i = 0; i < n; i++)
    {
        Car car;
        cout << "Car number: " << i + 1 << endl;
        cout << "Brand: ";
        cin >> brand;
        cout << "Power: ";
        cin >> power;
        cout << "Price: ";
        cin >> price;
        car.setBrand(brand);
        car.setPower(power);
        car.setPrice(price);
        arr[i] = car;
    }
}

void CarArray::output()
{
    for (int i = 0; i < n; i++)
    {
        arr[i].printInfo();
    }
}

void CarArray::table()
{
    cout << "Brand | Power | Price";

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << arr[i].getBrand();
        cout.width(8);
        cout << arr[i].getPower();
        cout.width(8);
        cout << arr[i].getPrice();
    }
}
