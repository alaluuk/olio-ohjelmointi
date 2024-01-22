#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
using namespace std;

class Vehicle
{
private:
    int cylinder;
public:
    Vehicle(int value);//luokan konstruktori eli muodostin
    Vehicle();//luokan konstruktori eli muodostin
    Vehicle(int value1, int value2);
    void Info(int value);
    ~Vehicle();
    int getCylinder() const;
    void setCylinder(int newCylinder);
};

#endif // VEHICLE_H
