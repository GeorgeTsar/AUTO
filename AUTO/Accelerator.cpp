#include "Accelerator.h"
#include<iostream>
using namespace std;

Accelerator::Accelerator(const int A, const int B, const int C):
	Engine(A),
	Fuel_tank(B),
	angle(C)
{
	cout << "Constructor Accelerator" << endl;
}

Accelerator::~Accelerator()
{
	angle = 0;
	cout << "Destructor Accelerator" << endl;
}

void Accelerator::show_accel() const
{
	cout << angle << endl;
}
