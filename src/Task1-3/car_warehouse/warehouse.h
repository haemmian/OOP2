#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <iostream>

class Warehouse
{
private:
    int capacity, index[10], cnt_Car = 0; //index refers to parking slot
public:
    Warehouse(int cp)
    {
        capacity = cp;

        //std::cout<<  "Warehouse\nCapacity: " << capacity << std::endl;
    }
    void parking();
    void leaving(int idxOUT);
    int numbCars();
    int Capacity();

};


#endif // WAREHOUSE_H
