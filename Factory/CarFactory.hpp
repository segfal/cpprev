#ifndef __CARFACTORY_HPP__
#define __CARFACTORY_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>



//factory design pattern
class Car
{
    public:
        virtual void print() = 0;
};

class CarFactory
{
    public:
        virtual Car* createCar() = 0;
};


class BenzCar : public Car
{
    public:
        void print() override
        {
            std::cout << "BenzCar" << std::endl;
        }
};


class BenzCarFactory : public CarFactory
{
    public:
        Car* createCar() override
        {
            return new BenzCar();
        }
};


class BmwCar : public Car
{
    public:
        void print() override
        {
            std::cout << "BmwCar" << std::endl;
        }
};


class BmwCarFactory : public CarFactory
{
    public:
        Car* createCar() override
        {
            return new BmwCar();
        }
};


class AudiCar : public Car
{
    public:
        void print() override
        {
            std::cout << "AudiCar" << std::endl;
        }
};


class AudiCarFactory : public CarFactory
{
    public:
        Car* createCar() override
        {
            return new AudiCar();
        }
};


class CarStore
{
    public:
        CarStore(CarFactory* carFactory)
        {
            this->carFactory = carFactory;
        }

        Car* orderCar()
        {
            return carFactory->createCar();
        }

    private:
        CarFactory* carFactory;
};





#endif // __CARFACTORY_HPP__