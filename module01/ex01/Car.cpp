#include "Car.hpp"

Car::Car() : _make("VW"), _model("Passat"), _year("2015")
{
    return;
}

Car::Car(const Car& copy)
{
    *this = copy;
    return;
}

Car& Car::operator=(const Car& other)
{
    if (this != &other)
    {
        this->_make = other.getMake();
        this->_model = other.getModel();
        this->_year = other.getYear();
    }
    return (*this);
}

void Car::Drive()
{
    std::cout << "Driving " << this->_make << " " << this->_model << " " << this->_year << std::endl;
    return
}

Car::~Car()
{
    return;
}