#include <iostream>
#include "car.h"
#include "warehouse.h"

using namespace std;

int main()
{

    //Initialization
    Warehouse warehouse(10);
    //Race_car race_car(10,6,60, 6, "blue", 200);   //Enter:    (Value , Capacity , power, number , colour, top speed)
    Car car1(10,  6, 60, 123, "blue");                //Enter:    (Value , Capacity , power, number , colour)
    Car car2(7,  4, 66, 234, "green");
    Car car3(8,  5, 30, 345, "blue");


    /*Car car[] =
    {
        Car(10, 6, 60, 244, "blue"),
        Car(10, 6, 60, 337, "blue"),
        Car(10, 6, 60, 444, "blue")
    };

    //actions*/



    warehouse.parking(car2);
    warehouse.parking(car1);
    warehouse.parking(car3);


    //warehouse.leaving(20);    //Enter Index / Parkingslot-Number



    //std::cout << "\nNumber of Cars in the Warehouse: " << warehouse.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << warehouse.Capacity() << std::endl;



    /*for(int i = 0; i<3; i++)
    {
        std::cout << "Car N." << i << ":" << car[i].GetNumber() << std::endl;
    }
    */
   warehouse.returnCars();

    return 0;
}
