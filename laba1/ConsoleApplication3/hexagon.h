#ifndef HEXAGON_H
#define HEXAGON_H
#include <iostream>
#include <cstdlib>
#include "figure.h"
class Hexagon : public Figure
{
public:
	Hexagon();
	Hexagon(std::istream &is);
	Hexagon(const Hexagon& orig);
	double Square() override;
	void Print() override;
	virtual ~Hexagon();
private:
	dot dots[6]; // 6 vertices
};
#endif // !1