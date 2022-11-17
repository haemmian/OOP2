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
    std::vector <int> TopSpeed;
    std::vector<Car> Storage;
    std::vector<Car>::iterator ptr;

    //Private Functions
    void sortCars();


public:


    Warehouse(int capacity);
    void parking(Car car);
    void parking(Race_car car);
    void leaving(int index_out);
    int GetnumbCars();
    int GetCapacity();
    int returnCars();
};


/*class compare{
public:
        bool operator()(Car a, Car b);

};*/


#endif // WAREHOUSE_H
