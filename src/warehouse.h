#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "car.h"
#include <algorithm>
#include <iostream>
#include <vector>


class Warehouse
{

private:
    int mCapacity, mCnt_Car = 0;
    std::vector <Car*> mStorage;

    //Private Functions
    std::vector<Car*> sortCars(std::vector<Car*> copiedStorage);
    bool Compare(Car*, Car*);

public:

    Warehouse(int capacity);
    void parking(Car &);
    void leaving(int index_out);
    int getnumbCars();
    int getCapacity();
    std::vector<Car*> returnCars();

};

///////////////////////////

class compareConfig
{
public:
     bool operator()(Car*&Ihs, Car*&rhs);
};

#endif // WAREHOUSE_H
