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
void Warehouse::parking(Race_car car)
{
    if(cnt_Car <= mCapacity)
    {
        Storage[cnt_Car] = car;


        std::cout << "\ncar N." << Storage[cnt_Car].GetNumber() << " is parked!" << std::endl;

        cnt_Car++;
    }
}

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


        std::cout<<"\nYou are able to use the car '" << Storage[Index_OUT-1].GetBrand() << "' at parking slot N." << Index_OUT << "!\n";


        std::cout << "\nReturned Car: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;


        std::cout << Storage[Index_OUT-1].GetBrand()<<
                                                       "\t$"  << Storage[Index_OUT-1].GetValue()    <<
                                                       "\t"   << Storage[Index_OUT-1].GetPower()    <<
                                                       "\t"   << Storage[Index_OUT-1].GetCapacity() <<
                                                       "\t"   << Storage[Index_OUT-1].GetNumber()   <<
                                                       "\t\t" << Storage[Index_OUT-1].GetColor();


        std::cout << "\t"   << std::endl;

        //  delete Storage[Index_OUT];
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

int Warehouse::GetCapacity()
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
    Race_car Speed;


    sortCars();

    std::cout << "\nReturned Cars: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;
    for (int i = 0; i <3; i++)
    {
        std::cout << Storage[i].GetBrand()<<
                     "\t$"   << Storage[i].GetValue()   <<
                     "\t"   << Storage[i].GetPower()    <<
                     "\t"   << Storage[i].GetCapacity() <<
                     "\t"   << Storage[i].GetNumber()   <<
                     "\t\t" << Storage[i].GetColor();


        /*if(Speed.GetTopSpeed()>0)
                        {
                            std::cout << "\t" << Speed.GetTopSpeed();
                        }
                     else
                        {
                            std::cout << "-";
                        }*/

        std::cout << "\t"   << std::endl;
    }


    return 0;
}
