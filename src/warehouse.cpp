#include "warehouse.h"


//CONSTRUCTOR¨
Warehouse::Warehouse(int capacity)
    :mCapacity(capacity){}

/**
 * @brief parks a car in the warehouse
 * @param car to park
 */
// your method
void Warehouse::parking(Race_car car)
{
    if(mCnt_Car <= mCapacity)
    {

        mStorage.push_back(&car);

        std::cout << "\ncar N." << mStorage[mCnt_Car] -> getNumber() << " is parked!" << std::endl;

        mCnt_Car++;
    }
}

void Warehouse::parking(Car car)
{
    if(mCnt_Car <= mCapacity)
    {

        mStorage.push_back(&car);

        std::cout << "\ncar N." << mStorage[mCnt_Car] -> getNumber() << " is parked!" << std::endl;

        mCnt_Car++;
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
    int ParkingSlotNumber = Index_OUT-1;


    if(mCnt_Car>=1)
    {                                     //in case there are no cars in the building


        std::cout<<"\nYou are able to use the car '" << mStorage[ParkingSlotNumber]->getBrand() << "' at parking slot N." << Index_OUT << "!\n";


        std::cout << "\nReturned Car: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;


        std::cout << mStorage[ParkingSlotNumber]->getBrand()<<
                     "\t$"  << mStorage[ParkingSlotNumber]->getValue()    <<
                     "\t"   << mStorage[ParkingSlotNumber]->getPower()    <<
                     "\t"   << mStorage[ParkingSlotNumber]->getCapacity() <<
                     "\t"   << mStorage[ParkingSlotNumber]->getNumber()   <<
                     "\t\t" << mStorage[ParkingSlotNumber]->getColor();
        if(mStorage[ParkingSlotNumber]->getTopSpeed() > 0)
        {
            std::cout << "\t" << mStorage[ParkingSlotNumber]->getTopSpeed() << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }

        std::cout << "\t\n"   << std::endl;

        mStorage.erase(mStorage.begin()+ParkingSlotNumber); //Object gets destroyed

        mCnt_Car--;
    }
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::getnumbCars()
{
    return mCnt_Car;
}

/**
 * @brief gets the warehouse's capacity
 * @return warehouse's capacity
 */
// your method

int Warehouse::getCapacity()
{
    return mCapacity;
}

std::vector<Car *> Warehouse::sortCars(std::vector<Car *> copiedStorage)
{

    int i, j;
    for (i = 0; i < mCnt_Car - 1; i++)
    {

        // Last i elements are already in place
        for (j = 0; j < mCnt_Car - i - 1; j++)
        {
            if (copiedStorage[j]->getNumber() > copiedStorage[j + 1]->getNumber())
            {
                std::swap(copiedStorage[j], copiedStorage[j + 1]);

            }
        }
    }
    return copiedStorage;
}

std::vector<Car*> Warehouse::returnCars()
{
    return sortCars(mStorage);
}
