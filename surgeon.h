#pragma once

#include <iostream>

struct Coordinate {
    double x = 0;
    double y = 0;
};

std::istream& operator>>(std::istream& stream, Coordinate& coordinate);

std::ostream& operator<<(std::ostream& stream, const Coordinate& coordinate);

bool operator==(const Coordinate& lhs, const Coordinate& rhs);

bool operator!=(const Coordinate& lhs, const Coordinate& rhs);

void Scalpel(const Coordinate& start, const Coordinate& finish);

void Hemostat(const Coordinate& coordinate);

void Tweezers(const Coordinate& coordinate);

void Suture(const Coordinate& start, const Coordinate& finish);