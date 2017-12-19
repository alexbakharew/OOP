#include "stdafx.h"
//#include "stdafx.cpp"
#include <cstdlib>
#include <iostream>
#include "octagon.h"
#include <cmath>
Octagon::Octagon()
{
	for (int i = 0; i < 8; i++)
	{
		dots[i].x = 0;
		dots[i].y = 0;
	}
}

Octagon::Octagon(std::istream &is)
{
	std::cout << "Creation of octagon" << std::endl;
	std::cout << "Enter 8 vertices(x & y)" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> dots[i].x;
		std::cin >> dots[i].y;
	}
	std::cout << "Octagon was created successfully" << std::endl;
}
Octagon::~Octagon()
{
	std::cout << "Octagon was deleted" << std::endl;
}
double Octagon::Print()
{
	std::cout<< "Here is a OCTAGON with following sides:" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "side " << i << " = ";
		if (i == 7)
		{
			std::cout << length(dots[0], dots[7]) << std::endl;
			std::cout << "Square = ";
			return Square();
		}
		std::cout << length(dots[i], dots[i + 1]) << std::endl;
	}
	std::cout << "Square = ";
	return Square();
}
double Octagon::Square()
{
	double sum = 0;
	for (int i = 1; i < 7; i++)
	{
		sum += dots[i].x*(dots[i + 1].y - dots[i - 1].y);
	}
	return abs(sum) / 2;
}