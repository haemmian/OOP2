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


        std::cout << "\t"   << std::endl;

        //  delete Storage[Index_OUT];
        //Storage.erase(ptr);


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
                std::swap(TopSpeed[j], TopSpeed[j + 1]);    //swap the speed value to the correct car
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


    return 0;
}
