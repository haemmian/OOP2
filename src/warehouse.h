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






    //Private Functions
    std::vector<Car*> sortCars(std::vector<Car*> copiedStorage);
    bool Compare(Car*, Car*);




public:
    std::vector <Car*> mStorage;
    Warehouse(int capacity);
    void parking(Car car);
    void parking(Race_car car);
    void leaving(int index_out);
    int getnumbCars();
    int getCapacity();
    std::vector<Car*> returnCars();

};

///////////////////////////

class compareConf
{
public:
     bool operator()(Car*&Ihs, Car*&rhs);
};

#endif // WAREHOUSE_H
