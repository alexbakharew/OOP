#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
#include "llist.h"

int main()
{
	TLList* list = new TLList();
	list->print_all();
	list->print_i(0);
	list->insert(PFig(new Triangle(std::cin)), 0);
	list->insert(PFig(new Octagon(std::cin)), 0);
	list->insert(PFig(new Hexagon(std::cin)), 0);
	list->print_all();
	list->remove(0);
	list->remove(2);
	list->print_all();
	list->~TLList();
	system("PAUSE");
    return 0;
}

