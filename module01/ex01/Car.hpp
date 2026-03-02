#ifndef 
# define CAR_HPP

class Car
{
    private:
        std::string _make;
        std::string _model;
        int _year;
    public:
        Car();
        Car(const Car& copy);
        Car& operator=(const Car& other);
        ~Car();
        virtual void drive() const;
        std::string getMake();
        std::string getModel();
        std::string getYear();        
}

#endif