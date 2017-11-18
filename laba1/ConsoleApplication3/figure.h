#ifndef FIGURE_H 
#define FIGURE_H
class Figure
{
public:
	virtual double Square() = 0;
	virtual void Print() = 0;
	virtual ~Figure() = 0 {}; 
};
typedef struct
{
	int x;
	int y;
}dot;
double length(dot, dot);
#endif
