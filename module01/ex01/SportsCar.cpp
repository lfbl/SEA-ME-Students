#include "SportsCar.hpp"

SportsCar::SportsCar() : _topSpeed("100")
{
    return;
}

SportsCar::SportsCar(const SportsCar& copy)
{
    *this = copy;
    return;
}

SportsCar& SportsCar::operator=(const SportsCar& other)
{
    if (this != &other)
    {
        this->_topSpeed = other.getTopSpeed();
    }
    return (*this);
}

int getTopSpeed()
{
    return(this->_topSpeed);
}

void SportsCar::Drive()
{
    Car::drive();
    std::cout << this->getTopSpeed() << std::end;
}

SportsCar::~SportsCar()
{
    return;
}