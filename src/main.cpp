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
    Car      Audi        (45'000, 5, 180, 987654, "turquoise", "Audi");        //Enter:    (Value , Capacity , power, number , colour, brand)

    std::vector <Car> Output;

    //actions



    warehouse.parking(BMW);
    warehouse.parking(Audi);
    warehouse.parking(Ferrari);


    //warehouse.leaving(3);    //Enter Index / Parkingslot-Number

/*
    int arr[] = {1,2,3,4,5,6,7,8,9};

    for (auto x : arr){
        std::cout<< x << " ";
    }

*/
    //std::cout << "\nNumber of Cars in the Warehouse: " << warehouse.numbCars() << std::endl;
    //std::cout << "\nWarehouse's capacity: " << warehouse.Capacity() << std::endl;

    /*
    for(int i = 0; i<3; i++)
    {
        std::cout << "Car N." << i << ":" << car[i].GetNumber() <<
std::endl;
    }
*/


    Output = warehouse.returnCars();

    std::cout << "\nReturned Cars: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;
    for (auto car : Output)
    {
        std::cout <<car.GetBrand()<<
                     "\t$"   <<car.GetValue()   <<
                     "\t"   <<car.GetPower()    <<
                     "\t"   <<car.GetCapacity() <<
                     "\t"   <<car.GetNumber()   <<
                     "\t\t" <<car.GetColor();


/*
        if(TopSpeed[i] > 0)
        {
            std::cout << "\t" << TopSpeed[i] << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }
*/
        std::cout << "\t"   << std::endl;
    }

    return 0;
}
