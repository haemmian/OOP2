#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car{

private:
    int value, capacity, power, number;
    std::string colour;
public:
    //Contructor-Function
    Car(int vl, int cp,int pw, int numb, std::string clr)
    {
        value       = vl;
        capacity    = cp;
        power       = pw;
        number      = numb;
        colour      = clr;

        //std::cout << "Car informations:\nValue: $" << value << "\nCapacity: " << capacity << "\nPower: " << power << "\nNumber: " << number <<
        //             "\nColour: " << clr << std::endl;
    }
};

class Race_car:public Car
{

private:
    int top_speed;
public:
    Race_car(int vl, int cp,int pw, int numb, std::string clr, int topsp): Car(vl, cp, pw, numb, clr )
    {

        top_speed = topsp;

        //std::cout << "Top speed: " << top_speed << "km/h" << std::endl;
    }
};
#endif // CAR_H
