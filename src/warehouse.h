#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"
#include <algorithm>
#include <iostream>
#include <vector>

#define MAX 1000


class Warehouse
{

private:
    int mCapacity, cnt_Car = 0; //index refers to parking slot
    Race_car a;
    std::vector <int> TopSpeed;
    std::vector<Car> Storage;



    Car *ptr = &a;

    //Car *ptr;

    //Private Functions
    std::vector<Car> sortCars(std::vector<Car> copiedStorage);



public:

    Warehouse(int capacity);
    void parking(Car car);
    void parking(Race_car car);
    void leaving(int index_out);
    int GetnumbCars();
    int GetCapacity();
    std::vector<Car> returnCars();

};


/*class compare{
public:
        bool operator()(Car a, Car b);

};*/


#endif // WAREHOUSE_H
