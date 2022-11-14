#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{

private:
    int value, capacity, power, number;
    std::string color;
public:
    //Contructor-Function
    Car();
    Car(int value, int capacity,int power, int number, std::string color);
    int GetNumber();
    int GetValue();
    int GetCapacity();
    int GetPower();
    std::string GetColor();
};

class Race_car:public Car
{

private:
    int mTop_speed;
public:
    Race_car(int value, int capacity,int power, int number, std::string color, int top_speed);
};
#endif // CAR_H
