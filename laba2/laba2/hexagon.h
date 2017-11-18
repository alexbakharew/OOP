#pragma once
#include <cstdlib>
#include <iostream>
typedef struct
{
	int x;
	int y;
}dot;
class Hexagon
{
public:
	Hexagon();
	Hexagon(std::istream&);
	double const Square();
	friend std::ostream& operator<<(std::ostream& os, const Hexagon& hxgn);
	friend std::istream& operator>>(std::istream& is, Hexagon& hxgn);
	Hexagon& operator = (const Hexagon& right);
	friend bool operator == (const Hexagon& left, const Hexagon& right);
	virtual ~Hexagon();
private:
	dot dots[6]; // 6 vertices
};
double length(dot d1, dot d2);