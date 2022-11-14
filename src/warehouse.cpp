#include "warehouse.h"

#include "bits/stdc++.h"

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
    index = cnt_Car;

 //   Car_Number          = car.GetNumber();
 //   number_car[cnt_Car] = car.GetNumber();

    Storage[cnt_Car] = car;

    cnt_Car++;

    //std::cout << "\ncar N." << Car_Number << " is parked!" << std::endl;
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
    return mcapacity;
}

int Warehouse::sortNumber()
{
    int n = sizeof(number_car) / sizeof(number_car[0]);

    std::sort(number_car, number_car + n);                  //Sort function

    return n;

}
int Warehouse::returnCars()
{
  /*  int n = sortNumber();

    std::cout << "\ncarnumber in the warehouse: ";

    for (int i = 0; i < n; ++i)
        if(number_car[i] >=1)
        {
            std::cout << number_car[i] << " ";
        }*/

    return 0;
}
