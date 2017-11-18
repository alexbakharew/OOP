#pragma once
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Octagon : public IFigure
{
public:
	Octagon();
	Octagon(std::istream &is);
	friend std::ostream& operator<<(std::ostream&, const Octagon&);
	double Square() override;
	virtual ~Octagon();
private:
	dot dots[8];// 8 vertices 
};