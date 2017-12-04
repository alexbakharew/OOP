#pragma once
class IFigure
{
public:
	virtual double Square() = 0;
	virtual double Print() = 0;
	//virtual ~IFigure() = 0 {};
};
typedef struct
{
	int x;
	int y;
}dot;
double length(dot, dot);
