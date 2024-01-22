#include "vehicle.h"

int Vehicle::getCylinder() const
{
    int a=5;
    return cylinder;
}

void Vehicle::setCylinder(int newCylinder)
{
    cylinder = newCylinder;
}

Vehicle::Vehicle()
{
    cylinder=value;
    cout<<"Vehicle konstruktoria kutsuttiin"<<endl;
    cout<<"ajoneuvossa on "<<cylinder<<" sylinteria"<<endl;
}

void Vehicle::Info(int value)
{
    cout<<"Info metodia kutsuttiin"<<endl;
}

Vehicle::~Vehicle()
{
cout<<"Vehicle destruktoria kutsuttiin"<<endl;
}
