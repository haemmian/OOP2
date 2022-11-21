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
    if(cnt_Car <= mCapacity)
    {


        TopSpeed.push_back(car.GetTopSpeed());      //Saves the speed value in a vector
        Storage.push_back(car);



        std::cout << "\ncar N." << Storage[cnt_Car].GetNumber() << " is parked!" << std::endl;

        cnt_Car++;
    }
}

void Warehouse::parking(Car car)
{
    if(cnt_Car <= mCapacity)
    {
        TopSpeed.push_back(0);
        Storage.push_back(car);

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
    int ParkingSlotNumber = Index_OUT-1;


    if(cnt_Car>=1)
    {                                     //in case there are no cars in the building
        std::vector<Car>::iterator ptr;

        ptr = Storage.end();
        std::cout<<"\nYou are able to use the car '" << Storage[ParkingSlotNumber].GetBrand() << "' at parking slot N." << Index_OUT << "!\n";


        std::cout << "\nReturned Car: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;


        std::cout << Storage[ParkingSlotNumber].GetBrand()<<
                     "\t$"  << Storage[ParkingSlotNumber].GetValue()    <<
                     "\t"   << Storage[ParkingSlotNumber].GetPower()    <<
                     "\t"   << Storage[ParkingSlotNumber].GetCapacity() <<
                     "\t"   << Storage[ParkingSlotNumber].GetNumber()   <<
                     "\t\t" << Storage[ParkingSlotNumber].GetColor();
        if(TopSpeed[ParkingSlotNumber] > 0)
        {
            std::cout << "\t" << TopSpeed[ParkingSlotNumber] << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }


        std::cout << "\t\n"   << std::endl;

        //  delete Storage[Index_OUT];




        std::cout << "\nStorage Size: " <<Storage.size();
        std::cout << "\nStorage Capacity: " <<Storage.capacity()<<" \n";

        for(int i = 0; i < 3; i++){std::cout<< Storage[i].GetBrand() << std::endl;}

        Storage.erase(Storage.begin()+2);

        std::cout<< "\nafter erased:\n";
        std::cout << "\nStorage Size: " <<Storage.size();
        std::cout << "\nStorage Capacity: " <<Storage.capacity()<<" \n";

        for(int i = 0; i < 3; i++){std::cout<< Storage[i].GetBrand() << std::endl;}


        cnt_Car--;
    }
}

/**
 * @brief gets the number of cars in the warehouse
 * @return number of cars in the warehouse
 */
// your method
int Warehouse::GetnumbCars()
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

std::vector<Car>  Warehouse::sortCars(std::vector<Car> copiedStorage)
{

    int i, j;
    for (i = 0; i < cnt_Car - 1; i++)
    {

        // Last i elements are already in place
        for (j = 0; j < cnt_Car - i - 1; j++)
        {
            if (copiedStorage[j].GetNumber() > copiedStorage[j + 1].GetNumber())
            {
                std::swap(copiedStorage[j], copiedStorage[j + 1]);
                std::swap(TopSpeed[j], TopSpeed[j + 1]);    //swap the speed value to the correct car
            }
        }
    }
    return copiedStorage;
}

std::vector<Car> Warehouse::returnCars()
{
    //Race_car &ptr = Storage[0];



/*
    std::cout << "\nReturned Cars: " << std::endl << "Brand \tValue: \tHP: \tCapacity \tRegistration Number \tColour \tTop Speed \t" << std::endl;
    for (int i = 0; i <3; i++)
    {
        std::cout << Storage[i].GetBrand()<<
                     "\t$"   << Storage[i].GetValue()   <<
                     "\t"   << Storage[i].GetPower()    <<
                     "\t"   << Storage[i].GetCapacity() <<
                     "\t"   << Storage[i].GetNumber()   <<
                     "\t\t" << Storage[i].GetColor();


        if(TopSpeed[i] > 0)
        {
            std::cout << "\t" << TopSpeed[i] << "km/h";
        }
        else
        {
            std::cout << "\t-";
        }

        std::cout << "\t"   << std::endl;
    }
*/
    return sortCars(Storage);

    //return sortedStorage;
}
