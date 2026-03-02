#ifndef
# define SportsCar_HPP
# include "Car.hpp"

class SportsCar : public Car
{
    private:
        int _topSpeed;
    public:
        SportsCar();
        SportsCar(const SportsCar& copy);
        SportsCar& operator=(const SportsCar& other);
        ~SportsCar();
        void drive() const;

}

#endif