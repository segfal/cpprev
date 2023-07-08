#include "box.hpp"

//Box Constructor
Box::Box(int x, int y, int z) : x(x), y(y), z(z) {}

//Box Equality
bool Box::operator==(const Box& other) const {
    return x == other.x && y == other.y && z == other.z;
}

//Box Inequality
bool Box::operator!=(const Box& other) const {
    return !(*this == other);
}

//Box Addition
Box Box::operator+(const Box& other) const {
    return Box(x + other.x, y + other.y, z + other.z);
}

//Box Subtraction
Box Box::operator-(const Box& other) const {
    return Box(x - other.x, y - other.y, z - other.z);
}

//Box Multiplication
Box Box::operator*(const Box& other) const {
    return Box(x * other.x, y * other.y, z * other.z);
}

//Box Division
Box Box::operator/(const Box& other) const {
    return Box(x / other.x, y / other.y, z / other.z);
}

//Box Modulus
Box Box::operator%(const Box& other) const {   return Box(x % other.x, y % other.y, z % other.z);  }

//Box Not Null
bool Box::notNull() const { return x != 0 || y != 0 || z != 0; }

//Box Output
std::ostream& operator<<(std::ostream& os, const Box& box) {
    os << "(" << box.x << ", " << box.y << ", " << box.z << ")";
    return os;
}

//Box Addition
bool Box::operator<(const Box& other) const {
    if (x < other.x) return true;
    if (x > other.x) return false;
    if (y < other.y) return true;
    if (y > other.y) return false;
    if (z < other.z) return true;
    if (z > other.z) return false;
    return false;
}



//Box Print
void Box::print() const { std::cout << *this << std::endl; }
