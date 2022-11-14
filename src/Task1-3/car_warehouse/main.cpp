#include <iostream>
#include "car.h"
#include "warehouse.h"
using namespace std;

int main()
{

    //Initialization
    Warehouse Wh(10);
    //Race_car RC(10,6,60, 6, "blue", 200);   //Enter:    (Value , Capacity , power, number , colour, top speed)
    Car car(10,6,60, 643, "blue");            //Enter:    (Value , Capacity , power, number , colour)

    //actions
    Wh.parking();
    Wh.leaving(0);    //Enter Index / Parkingslot-Number

    //std::cout << "\nNumber of Cars in the Warehouse: " << Wh.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << Wh.Capacity() << std::endl;


    return 0;
}
