#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"
#include <algorithm>
#include <iostream>
#include <vector>

class Warehouse
{

private:
    int mCapacity, mCnt_Car = 0; //index refers to parking slot

    std::vector <int> mTopSpeed;
    std::vector<Car> mStorage;

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


#endif // WAREHOUSE_H
