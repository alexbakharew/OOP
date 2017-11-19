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
double Hexagon::Print()
{
	std::cout << "Here is a Hexagon with following sides:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << "side " << i << " = ";
		if (i == 5)
		{
			std::cout << length(dots[0], dots[5]) << std::endl;
			std::cout << "Square = ";
			return Square();
		}
		std::cout << length(dots[i], dots[i + 1]) << std::endl;
	}
	std::cout << "Square = ";
	return Square();
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