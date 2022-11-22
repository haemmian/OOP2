#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car
{

private:
    int mValue, mCapacity, mPower, mNumber, mTopSpeed;

    std::string mColor, mBrand;

public:
    //Contructor-Function
    Car();
    Car( int value, int capacity,int power, int number, std::string color, std::string brand, int topSpeed = 0);
    int getNumber();
    int getValue();
    int getCapacity();
    int getPower();
    int getTopSpeed();
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
    Race_car(int value, int capacity,int power, int number, std::string color, std::string brand, int topSpeed);


    int getTopSpeed();

};
#endif // CAR_H
