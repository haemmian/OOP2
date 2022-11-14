#include "car.h"

Car::Car()
{

}

Car::Car(int value, int capacity,int power, int number, std::string color)
{
    this->value               = value;
    this->capacity            = capacity;
    this->power               = power;
    this->number              = number;
    this->color              = color;

    //std::cout << "Car informations:\nValue: $" << value << "\nCapacity: " << capacity << "\nPower: " << power << "\nNumber: " << number <<
    //             "\nColour: " << clr << std::endl;
}


//GetValues for the car
int Car::GetNumber()
{
    return number;
}

int Car::GetValue()
{
    return value;
}

int Car::GetCapacity()
{
    return capacity;
}

int Car::GetPower()
{
    return power;
}

std::string Car::GetColor()
{
    return color;
}



Race_car::Race_car(int value, int capacity,int power, int number, std::string color, int top_speed): Car(value, capacity, power, number, color)
{

    mTop_speed = top_speed;

    //std::cout << "Top speed: " << top_speed << "km/h" << std::endl;
}
