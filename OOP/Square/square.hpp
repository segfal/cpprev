#ifndef __SQUARE_HPP__
#define __SQUARE_HPP__
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
#include <fstream>


struct Square {
    int x, y;
    Square(int x=0, int y=0);
    bool operator<(const Square& other) const;
    bool operator==(const Square& other) const;
    bool operator!=(const Square& other) const;
    Square operator+(const Square& other) const;
    Square operator-(const Square& other) const;
    Square operator*(const Square& other) const;
    Square operator/(const Square& other) const;
    Square operator%(const Square& other) const;
    bool notNull() const;
    friend std::ostream& operator<<(std::ostream& os, const Square& square);
    void print() const;
};




#include "square.cpp"



#endif // __SQUARE_HPP__