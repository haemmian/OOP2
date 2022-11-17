#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car
{

private:
    int mValue, mCapacity, mPower, mNumber;

    std::string mColor, mBrand;

public:
    int value;
    //Contructor-Function
    Car();
    Car( int value, int capacity,int power, int number, std::string color, std::string brand);
    int GetNumber();
    int GetValue();
    int GetCapacity();
    int GetPower();
    int GetTop_Speed();
    std::string GetColor();
    std::string GetBrand();

};
//////////////////////////////////////////////////////////
class Race_car:public Car
{

private:

int mTop_speed;
public:
    Race_car();
    Race_car(int value, int capacity,int power, int number, std::string color, std::string brand, int top_speed);


    int GetTopSpeed();

};
#endif // CAR_H
