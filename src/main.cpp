 #include <iostream>
#include "car.h"
#include "warehouse.h"

using namespace std;

int main()
{

    //Initialization
    Warehouse warehouse(10);

    Race_car Ferrari    (200'000, 2, 400, 111777, "red", 300, "Ferrari");      //Enter:    (Value , Capacity , power, number , colour, top speed, brand)
    Car      BMW        (50'000, 5, 200, 445445, "black", "BMW");              //Enter:    (Value , Capacity , power, number , colour, brand)
    Car      Audi        (45'000, 5, 180, 987654, "turquoise", "Audi" );        //Enter:    (Value , Capacity , power, number , colour, brand)


    //actions*/



    warehouse.parking(BMW);
    warehouse.parking(Audi);
    warehouse.parking(Ferrari);


    warehouse.leaving(2);    //Enter Index / Parkingslot-Number



    //std::cout << "\nNumber of Cars in the Warehouse: " << warehouse.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << warehouse.Capacity() << std::endl;



    /*for(int i = 0; i<3; i++)
    {
        std::cout << "Car N." << i << ":" << car[i].GetNumber() << std::endl;
    }
    */
   //warehouse.returnCars();

    return 0;
}
