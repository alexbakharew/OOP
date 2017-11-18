#pragma once
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Hexagon : public IFigure
{
public:
	Hexagon();
	Hexagon(std::istream &is);
	friend std::ostream& operator<<(std::ostream&, const Hexagon&);
	double Square() override;
	virtual ~Hexagon();
private:
	dot dots[6]; // 6 vertices
};