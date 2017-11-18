#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "hexagon.h"
#include <cmath>
double length(dot d1, dot d2)
{
	return sqrt(pow((d2.x - d1.x), 2) + pow((d2.y - d1.y), 2));
}
Hexagon::Hexagon()
{
	for (int i = 0; i < 6; i++)
	{
		dots[i].x = 0;
		dots[i].y = 0;
	}
	std::cout << "Hexagon was created successfully" << std::endl;
}
Hexagon::Hexagon(std::istream &is)
{
	std::cout << "Creation of hexagon" << std::endl;
	std::cout << "Enter 6 vertices( x & y)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		is >> dots[i].x;
		is >> dots[i].y;
	}
	std::cout << "Hexagon was created successfully" << std::endl;
}
Hexagon::~Hexagon()
{
	std::cout << "Hexagon was deleted" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Hexagon& hxgn)
{
	os << "Here is a HEXAGON with following sides:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		os << "side " << i << " = ";
		if (i == 5)
		{
			os << length(hxgn.dots[0], hxgn.dots[5]) << std::endl;
			return os;
		}
		os << length(hxgn.dots[i], hxgn.dots[i + 1]) << std::endl;
	}
	return os;
}
double Hexagon::Square()
{
	double sum = 0;
	for (int i = 1; i < 5; i++)
	{
		sum += dots[i].x*(dots[i + 1].y - dots[i - 1].y);
	}
	return abs(sum) / 2;
}