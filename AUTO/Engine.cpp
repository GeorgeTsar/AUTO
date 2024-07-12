#include "Engine.h"
#include<iostream>
using namespace std;

Engine::Engine(const int A): volume_e(A)
{
    cout << "Constructor Engine" << endl;
}

Engine::~Engine()
{
    volume_e = 0;
    cout << "Destructor Engine" << endl;
}

void Engine::show_engine() const
{
    cout << volume_e << endl;
}
