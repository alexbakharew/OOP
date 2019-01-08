#include <iostream>
#include <cmath>
#include "eq_triangle.h"

EquTriangle::EquTriangle(int x) : side(x){}
EquTriangle::~EquTriangle()
{
    std::cout << "Destructor for equlaterial triangle\n";
}

double EquTriangle::Square() const
{
    std::cout << "Using sinus\n";
    return side * side* sin(M_PI / 3) * 0.5;
}
void EquTriangle::Output() const
{
    std::cout << "Equilateral triangle with side " << side << std::endl;
    return;
}
void EquTriangle::Input()
{
    std::cin >> side;
}
double EquTriangle::SemiPerimetr() const
{
    return side * 3 / 2;
}
bool EquTriangle::operator == (const EquTriangle& t)
{
    return side == t.side;
}

void EquTriangle::operator = (const EquTriangle& t)
{
    side = t.side;


}
