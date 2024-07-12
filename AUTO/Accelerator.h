#pragma once
#include "Engine.h"
#include "Fuel_tank.h"

class Accelerator:
	public Engine,
	public Fuel_tank
{
private:
	int angle;
public:
	Accelerator(const int A, const int B, const int C);
	~Accelerator();
	void show_accel() const;
};

