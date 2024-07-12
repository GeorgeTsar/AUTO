#include "Fuel_tank.h"
#include<iostream>
using namespace std;

Fuel_tank::Fuel_tank(const int B): volume_ft(B)
{
	cout << "Constructor Fuel_tank" << endl;
}

Fuel_tank::~Fuel_tank()
{
	volume_ft = 0;
	cout << "Destructor Fuel_tank" << endl;
}

void Fuel_tank::show_ft() const
{
	cout << volume_ft << endl;
}
