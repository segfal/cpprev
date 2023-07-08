#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <sstream>
#include <cmath>
#include "Factory/CarFactory.hpp"

int main(){
    CarFactory* carFactory = new BenzCarFactory();
    Car* car = carFactory->createCar();
    car->print();
    delete car;
    delete carFactory;
    return 0;

    
    

}







