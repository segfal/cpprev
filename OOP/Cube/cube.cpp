#include "cube.hpp"

Cube::Cube(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

bool Cube::operator<(const Cube& other) const {
    if (this->x < other.x) {
        return true;
    } else if (this->x > other.x) {
        return false;
    } else {
        if (this->y < other.y) {
            return true;
        } else if (this->y > other.y) {
            return false;
        } else {
            if (this->z < other.z) {
                return true;
            } else {
                return false;
            }
        }
    }
}


bool Cube::operator==(const Cube& other) const {
    return this->x == other.x && this->y == other.y && this->z == other.z;
}


bool Cube::operator!=(const Cube& other) const {
    return !(*this == other);
}


Cube Cube::operator+(const Cube& other) const {
    return Cube(this->x + other.x, this->y + other.y, this->z + other.z);
}


Cube Cube::operator-(const Cube& other) const {
    return Cube(this->x - other.x, this->y - other.y, this->z - other.z);
}


Cube Cube::operator*(const Cube& other) const {
    return Cube(this->x * other.x, this->y * other.y, this->z * other.z);
}


Cube Cube::operator/(const Cube& other) const {
    return Cube(this->x / other.x, this->y / other.y, this->z / other.z);
}


Cube Cube::operator%(const Cube& other) const {
    return Cube(this->x % other.x, this->y % other.y, this->z % other.z);
}


bool Cube::notNull() const {
    return this->x != 0 || this->y != 0 || this->z != 0;
}


std::ostream& operator<<(std::ostream& os, const Cube& cube) {
    os << "(" << cube.x << ", " << cube.y << ", " << cube.z << ")";
    return os;
}


void Cube::print() const {
    std::cout << *this << std::endl;
}
