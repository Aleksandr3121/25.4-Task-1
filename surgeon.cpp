#include "surgeon.h"

using namespace std;

std::istream& operator>>(std::istream& stream, Coordinate& coordinate) {
    stream >> coordinate.x >> coordinate.y;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Coordinate& coordinate) {
    stream << coordinate.x << ' ' << coordinate.y;
    return stream;
}

bool operator==(const Coordinate& lhs, const Coordinate& rhs) {
    return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool operator!=(const Coordinate& lhs, const Coordinate& rhs) {
    return !(lhs == rhs);
}

void Scalpel(const Coordinate& start, const Coordinate& finish) {
    cout << "An incision was made with a scalpel" << endl;
}

void Hemostat(const Coordinate& coordinate) {
    cout << "A hemostatic clamp was made" << endl;
}

void Tweezers(const Coordinate& coordinate) {
    cout << "The capture with tweezers is done" << endl;
}

void Suture(const Coordinate& start, const Coordinate& finish) {
    cout << "A suture was made" << endl;
}