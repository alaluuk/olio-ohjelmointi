#include "vehicle.h"

#include <iostream>

using namespace std;

int main()
{
    Vehicle objectVehicle;


    Vehicle *objectVehicle2;
    objectVehicle2=new Vehicle(4);
    objectVehicle2->Info(5);
    delete objectVehicle2;
    objectVehicle2=nullptr;
    return 0;
}
