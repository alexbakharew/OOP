#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "triangle.h"
#include <cmath>
Triangle::Triangle() : Triangle(0, 0, 0) {};
Triangle::Triangle(size_t i, size_t j, size_t k) : side_a(i), side_b(j), side_c(k)
{
	std::cout << "Triangle was created successfully" << std::endl;
}

Triangle::Triangle(std::istream &is)
{
	std::cout << "Creation of triangle" << std::endl;
	std::cout << "Enter the length of 3 sides" << std::endl;
	is >> side_a;
	is >> side_b;
	is >> side_c;
	std::cout << "Triangle was created successfully" << std::endl;
}
Triangle::Triangle(const Triangle& orig)
{
	side_a = orig.side_a;
	side_b = orig.side_b;
	side_c = orig.side_c;
	std::cout << "Triangle was copied successfully!" << std::endl;
}
Triangle::~Triangle()
{
	std::cout << "Triangle was deleted" << std::endl;
}
double Triangle::Square()
{
	double p = double(side_a + side_b + side_c) / 2;
	return sqrt(p*(p - side_a)*(p - side_b)*(p - side_c));
}
std::ostream& operator<<(std::ostream& os, const Triangle& trngl)
{
	std::cout << "Here is a TRIANGLE with following sides:" << std::endl;
	std::cout << "side a = " << trngl.side_a << std::endl;
	std::cout << "side b = " << trngl.side_b << std::endl;
	std::cout << "side c = " << trngl.side_c << std::endl;
	return os;
}
