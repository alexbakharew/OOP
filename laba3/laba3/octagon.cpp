#include "stdafx.h"
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
std::ostream& operator<<(std::ostream& os, const Octagon& octgn)
{
	os << "Here is a OCTAGON with following sides:" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		os << "side " << i << " = ";
		if (i == 5)
		{
			os << length(octgn.dots[0], octgn.dots[5]) << std::endl;
			return os;
		}
		os << length(octgn.dots[i], octgn.dots[i + 1]) << std::endl;
	}
	return os;
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