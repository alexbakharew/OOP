#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <memory>
#include <iomanip>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
#include "llist.h"
#include "item.cpp"
#include "llist.cpp"
int main()
{
	TLList<IFigure> list;
	list.insert(std::shared_ptr<Triangle>(new Triangle(std::cin)), 0);
	list.insert(std::shared_ptr<Octagon>(new Octagon(std::cin)), 0);
	list.insert(std::shared_ptr<Hexagon>(new Hexagon(std::cin)), 0);
	list.print_all();
	list.remove(0);
	list.remove(0);
	list.remove(0);
	list.~TLList();
	system("PAUSE");
    return 0;
}

