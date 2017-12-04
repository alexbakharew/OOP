#pragma once
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Hexagon : public IFigure
{
public:
	Hexagon();
	Hexagon(std::istream &is);
	double Print() override;
	double Square() override;
	virtual ~Hexagon();
private:
	dot dots[6]; // 6 vertices
};