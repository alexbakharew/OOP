#pragma once
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Triangle : public IFigure
{
public:
	Triangle();
	Triangle(std::istream &is);
	Triangle(size_t i, size_t j, size_t k);
	Triangle(const Triangle& orig);
	double Print() override;
	double Square() override;
	virtual ~Triangle();
private:
	size_t side_a;
	size_t side_b;
	size_t side_c;
};