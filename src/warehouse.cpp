#include "warehouse.h"



//CONSTRUCTOR¨
Warehouse::Warehouse(int capacity)
{
    mCapacity = capacity;
    //std::cout<<  "Warehouse\nCapacity: " << capacity << std::endl;
}

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
void Warehouse::parking(Car car)
{
    if(cnt_Car <= mCapacity)
    {
        Storage[cnt_Car] = car;

        std::cout << "\ncar N." << Storage[cnt_Car].GetNumber() << " is parked!" << std::endl;

        cnt_Car++;
    }
}

/**
 * @brief gets the parked car at index
 * @param index of the parked car
 * @return the car at specified index
 */
// your method

void Warehouse::leaving(int Index_OUT)
{

    if(cnt_Car>=1)
    {                                     //in case there are no cars in the building
        std::cout<<"\nYou are able to use the car at parking slot N." << Index_OUT << "!\n";

        cnt_Car--;
    }
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::numbCars()
{
    return cnt_Car;
}

/**
 * @brief gets the warehouse's capacity
 * @return warehouse's capacity
 */
// your method

int Warehouse::Capacity()
{
    return mCapacity;
}

void Warehouse::sortCars()
{
    int i, j;
    for (i = 0; i < cnt_Car - 1; i++)
    {

        // Last i elements are already in place
        for (j = 0; j < cnt_Car - i - 1; j++)
        {
            if (Storage[j].GetNumber() > Storage[j + 1].GetNumber())
            {
                std::swap(Storage[j], Storage[j + 1]);
            }
        }
    }
}
int Warehouse::returnCars()
{

    sortCars();

    std::cout << "\nReturned Cars: " << std::endl << "Brand\tCar N. \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed" << std::endl;
    for (int i = 0; i <3; i++)
    {
        std::cout << "Car." << i+1 <<
                     ":\t"  << Storage[i].GetNumber()   <<
                     "\t"   << Storage[i].GetValue()    <<
                     "\t"   << Storage[i].GetPower()    <<
                     "\t"   << Storage[i].GetCapacity() <<
                     "\t"   << Storage[i].GetNumber()   <<
                     "\t\t" << Storage[i].GetColor()    <<
                     "\t"   << std::endl;
    }


    return 0;
}
