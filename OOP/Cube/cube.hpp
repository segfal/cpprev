#ifndef __CUBE_HPP__
#define __CUBE_HPP__


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


class Cube {
    public:
        int x, y, z;
        Cube(int x=0, int y=0, int z=0);
        bool operator<(const Cube& other) const;
        bool operator==(const Cube& other) const;
        bool operator!=(const Cube& other) const;
        Cube operator+(const Cube& other) const;
        Cube operator-(const Cube& other) const;
        Cube operator*(const Cube& other) const;
        Cube operator/(const Cube& other) const;
        Cube operator%(const Cube& other) const;
        bool notNull() const;
        friend std::ostream& operator<<(std::ostream& os, const Cube& cube);
        void print() const;
};

#include "cube.cpp"

#endif // __CUBE_HPP__