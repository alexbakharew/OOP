#ifndef OCTAGON_H
#define OCTAGON_H
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Octagon : public Figure
{
public:
	Octagon();
	Octagon(std::istream &is);
	Octagon(const Octagon& orig);
	double Square() override;
	void Print() override;
	virtual ~Octagon();
private:
	dot dots[8];// 8 vertices 
};
#endif