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

        mTopSpeed.push_back(car.GetTopSpeed());      //Saves the speed value in a vector
        mStorage.push_back(car);

        std::cout << "\ncar N." << mStorage[mCnt_Car].GetNumber() << " is parked!" << std::endl;

        mCnt_Car++;
    }
}

void Warehouse::parking(Car car)
{
    if(mCnt_Car <= mCapacity)
    {
        mTopSpeed.push_back(0);
        mStorage.push_back(car);

        std::cout << "\ncar N." << mStorage[mCnt_Car].GetNumber() << " is parked!" << std::endl;

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


        std::cout<<"\nYou are able to use the car '" << mStorage[ParkingSlotNumber].GetBrand() << "' at parking slot N." << Index_OUT << "!\n";


        std::cout << "\nReturned Car: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;


        std::cout << mStorage[ParkingSlotNumber].GetBrand()<<
                     "\t$"  << mStorage[ParkingSlotNumber].GetValue()    <<
                     "\t"   << mStorage[ParkingSlotNumber].GetPower()    <<
                     "\t"   << mStorage[ParkingSlotNumber].GetCapacity() <<
                     "\t"   << mStorage[ParkingSlotNumber].GetNumber()   <<
                     "\t\t" << mStorage[ParkingSlotNumber].GetColor();
        if(mTopSpeed[ParkingSlotNumber] > 0)
        {
            std::cout << "\t" << mTopSpeed[ParkingSlotNumber] << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }


        std::cout << "\t\n"   << std::endl;

        mCnt_Car--;
    }
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::GetnumbCars()
{
    return mCnt_Car;
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

std::vector<Car>  Warehouse::sortCars(std::vector<Car> copiedStorage)
{

    int i, j;
    for (i = 0; i < mCnt_Car - 1; i++)
    {

        // Last i elements are already in place
        for (j = 0; j < mCnt_Car - i - 1; j++)
        {
            if (copiedStorage[j].GetNumber() > copiedStorage[j + 1].GetNumber())
            {
                std::swap(copiedStorage[j], copiedStorage[j + 1]);
                std::swap(mTopSpeed[j], mTopSpeed[j + 1]);    //swap the speed value to the correct car
            }
        }
    }
    return copiedStorage;
}

std::vector<Car> Warehouse::returnCars()
{
    return sortCars(mStorage);
}
