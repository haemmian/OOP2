#include "car.h"

Car::Car()
{

}


Car::Car(int value, int capacity,int power, int number, std::string color, std::string brand)
    : mValue(value)
    , mCapacity(capacity)
    , mPower(power)
    , mNumber(number)
    , mColor(color)
    , mBrand(brand)
{}


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

std::string Car::GetBrand()
{
    return mBrand;
}

////////////////////////////////////////////////////////////
Race_car::Race_car()
{

}

Race_car::Race_car(int value, int capacity,int power, int number, std::string color, std::string brand, int top_speed)
    : Car(value, capacity, power, number, color, brand)
    , mTop_speed(top_speed)
{}

int Race_car::GetTopSpeed()
{
    return mTop_speed;
}


