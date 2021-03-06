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
#include "iterator.h"
int main()
{
	TLList<IFigure> list;
	list.insert(std::shared_ptr<Triangle>(new Triangle(std::cin)), 0);
	list.insert(std::shared_ptr<Triangle>(new Triangle(std::cin)), 0);
	list.insert(std::shared_ptr<Triangle>(new Triangle(std::cin)), 0);
	std::cout << "-----------------------------------------------------" << std::endl;
	for (TIterator<TItem<IFigure>, IFigure> i = list.begin(); i != list.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	system("PAUSE");
    return 0;
}

