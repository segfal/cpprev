
#include "square.hpp"

Square::Square(int x, int y) : x(x), y(y) {}

bool Square::operator<(const Square& other) const {
    if (x < other.x) return true;
    if (x > other.x) return false;
    if (y < other.y) return true;
    if (y > other.y) return false;
    return false;
}


bool Square::operator==(const Square& other) const {
    return x == other.x && y == other.y;
}


bool Square::operator!=(const Square& other) const {
    return !(*this == other);
}

bool Square::notNull() const { return x != 0 || y != 0; }

Square Square::operator+(const Square& other) const {
    return Square(x + other.x, y + other.y);
}

Square Square::operator-(const Square& other) const {
    return Square(x - other.x, y - other.y);
}

Square Square::operator*(const Square& other) const {
    return Square(x * other.x, y * other.y);
}

Square Square::operator/(const Square& other) const {
    return Square(x / other.x, y / other.y);
}

Square Square::operator%(const Square& other) const {
    return Square(x % other.x, y % other.y);
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    os << "(" << square.x << ", " << square.y << ")";
    return os;
}

void Square::print() const {
    std::cout << *this << std::endl;
}
