#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car
{

private:
    int mValue, mCapacity, mPower, mNumber;

    std::string mColor, mBrand;

public:
    //Contructor-Function
    Car();
    Car( int value, int capacity,int power, int number, std::string color, std::string brand);
    int getNumber();
    int getValue();
    int getCapacity();
    int getPower();
    std::string getColor();
    std::string getBrand();

};
//////////////////////////////////////////////////////////
class Race_car:public Car
{

private:
    int mTop_speed;

public:
    Race_car();
    Race_car(int value, int capacity,int power, int number, std::string color, std::string brand, int top_speed);


    int getTopSpeed();

};
#endif // CAR_H
