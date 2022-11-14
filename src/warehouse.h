#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"


#include <iostream>
#define MAX 1000


class Warehouse
{

private:
    int mCapacity, index, cnt_Car = 0, Car_Number; //index refers to parking slot
    int value_car, capacity_car, power_car, number_car[10]; //the first     [] is used for the input value

    Car Storage[MAX];

    //Private Functions
    int sortNumber();


public:


    Warehouse(int capacity);
    void parking(Car car);
    void leaving(int index_out);
    int numbCars();
    int Capacity();

    int returnCars();

};


#endif // WAREHOUSE_H

