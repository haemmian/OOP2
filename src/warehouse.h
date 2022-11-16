#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"
#include <algorithm>
#include <iostream>

#define MAX 1000


class Warehouse
{

private:
    int mCapacity, index, cnt_Car = 0, Car_Number; //index refers to parking slot

    Car         Storage[MAX];



    //Private Functions
    void sortCars();


public:


    Warehouse(int capacity);

    void parking(Car car);
    void parking(Race_car car);

    void leaving(int index_out);
    int numbCars();
    int GetCapacity();

    int returnCars();

};


#endif // WAREHOUSE_H

