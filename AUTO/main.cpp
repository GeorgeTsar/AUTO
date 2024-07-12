#include "Engine.h"
#include "Fuel_tank.h"
#include "Accelerator.h"
#include<iostream>
using namespace std;

int main(void)
{
    Accelerator obj(2, 50, 45);

    obj.show_engine();
    obj.show_ft();
    obj.show_accel();

    return 0;

}