#pragma once
class Fuel_tank
{
private:
	int volume_ft;
public:
	Fuel_tank(const int B);
	~Fuel_tank();
	void show_ft() const;
};
