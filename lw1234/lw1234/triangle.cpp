#include <iostream>
#include <cmath>
#include <functional>
#include "triangle.h"
int Triangle::count = 0;
Triangle::Triangle(int x, int y, int z) : a(x), b(y), c(z)
{
    ++count;
}

Triangle::Triangle(const Triangle &copy)
{
    a = copy.a;
    b = copy.b;
    c = copy.c;
    ++count;
}

void Triangle::Input()
{
    std::cin >> a >> b >> c;
}

void Triangle::Output() const
{
    std::cout << a << " " << b << " " << c << std::endl;
    std::cout << "Square = " << Square() << std::endl;
}

double Triangle::Square() const
{
    double p = SemiPerimetr();
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::SemiPerimetr() const
{
    return (a + b + c) * .5;
}
Triangle::~Triangle()
{
    --count;
}

bool Triangle::operator == (const Triangle& t)
{
    if(a == t.a && b == t.b && c == t.c)
        return true;
    else return false;
}

void Triangle::operator = (const Triangle& t)
{
    a = t.a;
    b = t.b;
    c = t.c;
}
