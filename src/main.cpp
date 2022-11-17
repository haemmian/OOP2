#include "warehouse.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //Initialization
    Warehouse warehouse(10);

    Race_car Ferrari    (200'000, 2, 400, 111777, "red", "Ferrari", 300);      //Enter:    (Value , Capacity , power, number , colour, brand, top speed)
    Car      BMW        (50'000, 5, 200, 445445, "black", "BMW");              //Enter:    (Value , Capacity , power, number , colour, brand)
    Car      Audi        (45'000, 5, 180, 987654, "turquoise", "Audi" );        //Enter:    (Value , Capacity , power, number , colour, brand)


    //actions



    warehouse.parking(BMW);
    warehouse.parking(Audi);
    warehouse.parking(Ferrari);


    warehouse.leaving(3);    //Enter Index / Parkingslot-Number



    //std::cout << "\nNumber of Cars in the Warehouse: " << warehouse.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << warehouse.Capacity() << std::endl;


/*
    for(int i = 0; i<3; i++)
    {
        std::cout << "Car N." << i << ":" << car[i].GetNumber() <<
std::endl;
    }
*/
   //warehouse.returnCars();



    return 0;
}
