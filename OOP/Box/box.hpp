#ifndef BOX_HPP
#define BOX_HPP
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


struct Box {
    int x, y, z;
    Box(int x=0, int y=0, int z=0);
    bool operator<(const Box& other) const;
    bool operator==(const Box& other) const;
    bool operator!=(const Box& other) const;
    Box operator+(const Box& other) const;
    Box operator-(const Box& other) const;
    Box operator*(const Box& other) const;
    Box operator/(const Box& other) const;
    Box operator%(const Box& other) const;
    bool notNull() const;
    friend std::ostream& operator<<(std::ostream& os, const Box& box);
    void print() const;
};





//C++  for all box methods
#include "box.cpp"




#endif // BOX_HPP

