#include "car.h"

Car::Car()
{

}

Car::Car(int value, int capacity,int power, int number, std::string color)
{
    mValue               = value;
    mCapacity            = capacity;
    mPower               = power;
    mNumber              = number;
    mColor              = color;

    //std::cout << "Car informations:\nValue: $" << value << "\nCapacity: " << capacity << "\nPower: " << power << "\nNumber: " << number <<
    //             "\nColour: " << clr << std::endl;
}


//GetValues for the car
int Car::GetNumber()
{
    return mNumber;
}

int Car::GetValue()
{
    return mValue;
}

int Car::GetCapacity()
{
    return mCapacity;
}

int Car::GetPower()
{
    return mPower;
}

std::string Car::GetColor()
{
    return mColor;
}


Race_car::Race_car(int value, int capacity,int power, int number, std::string color, int top_speed): Car(value, capacity, power, number, color)
{

    mTop_speed = top_speed;

    //std::cout << "Top speed: " << top_speed << "km/h" << std::endl;
}
