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
    Car      Audi       (45'000, 5, 180, 987654, "turquoise", "Audi");        //Enter:    (Value , Capacity , power, number , colour, brand)

    std::vector <Car*> Output;

    //actions

    warehouse.parking(BMW);
    warehouse.parking(Audi);
    warehouse.parking(Ferrari);


    Output = warehouse.returnCars();

    std::cout << "\nReturned Cars: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;
    for (auto car : Output)
    {
        std::cout <<car->getBrand()             <<
                    "\t$"  <<car->getValue()    <<
                    "\t"   <<car->getPower()    <<
                    "\t"   <<car->getCapacity() <<
                    "\t"   <<car->getNumber()   <<
                    "\t\t" <<car->getColor();



        if(car->getTopSpeed() > 0)
        {
            std::cout << "\t" << car->getTopSpeed() << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }

        std::cout << "\t"   << std::endl;
    }

    return 0;
}
