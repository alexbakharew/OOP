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
	friend std::ostream& operator<<(std::ostream&, const Triangle&);
	Triangle(const Triangle& orig);
	double Square() override;
	virtual ~Triangle();
private:
	size_t side_a;
	size_t side_b;
	size_t side_c;
};