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


//getValues for the car
int Car::getNumber()
{
    return mNumber;
}

int Car::getValue()
{
    return mValue;
}

int Car::getCapacity()
{
    return mCapacity;
}

int Car::getPower()
{
    return mPower;
}

std::string Car::getColor()
{
    return mColor;
}

std::string Car::getBrand()
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

int Race_car::getTopSpeed()
{
    return mTop_speed;
}


