#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stdbool.h>
#include "hexagon.h"
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
}
Hexagon::Hexagon(std::istream& is)
{
	std::cout << "Creation of hexagon" << std::endl;
	std::cout << "Enter 6 vertices( x & y)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		is>>dots[i].x;
		is>>dots[i].y;
	}
	std::cout << "Hexagon was created successfully" << std::endl;
}
double const Hexagon::Square()
{
	double sum = 0;
	for (int i = 1; i < 6; i++)
	{
		sum += dots[i].x*(dots[i + 1].y - dots[i - 1].y);
	}
	return abs(sum) / 2;
}
Hexagon::~Hexagon()
{
	//std::cout << "Hexagon was deleted" << std::endl;
}
bool operator == (const Hexagon& left, const Hexagon& right)
{
	for (int i = 0; i < 6; i++)
	{
		if (i == 5)
		{
			if (length(left.dots[5], left.dots[0]) == length(right.dots[5], right.dots[0])) return true; // the last checking
			else return false;
		}
		else
		{
			if (length(left.dots[i], left.dots[i + 1]) == length(right.dots[i], right.dots[i + 1])) continue;
			else return false;
		}
	}
	return true;
}
Hexagon& Hexagon::operator = (const Hexagon& right)
{
	if (this == &right) return *this;
	for (int i = 0; i < 6; i++)
	{
		dots[i].x = right.dots->x;
		dots[i].y = right.dots->y;
	}
	std::cout << "hexagon was copied successfully!" << std::endl;
	return *this;
}
std::istream& operator>>(std::istream& is, Hexagon& hxgn)
{
	std::cout << "Creation of hexagon" << std::endl;
	std::cout << "Enter 6 vertices( x & y)" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		is >> hxgn.dots[i].x;
		is >> hxgn.dots[i].y;
	}
	std::cout << "Hexagon was created successfully" << std::endl;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Hexagon& hxgn)
{
	std::cout << "Here is a HEXAGON with following sides:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << "side " << i << " = ";
		if (i == 5)
		{
			std::cout << length(hxgn.dots[0], hxgn.dots[5]) << std::endl;
			//std::cout << hxgn.Square << std::endl;
			return os;
		}
		std::cout << length(hxgn.dots[i], hxgn.dots[i + 1]) << std::endl;
	}
}