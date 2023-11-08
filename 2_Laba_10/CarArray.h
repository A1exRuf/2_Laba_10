#pragma once

#include "Car.h"

class CarArray
{
private:
	int n;
	Car* arr = nullptr;
	
public:
	CarArray(int n);
	~CarArray();

	void input();
	void output();
	void table();
	
};

