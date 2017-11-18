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
	TLList list;
	list.insert(PFig(new Triangle(std::cin)), 0);
	list.insert(PFig(new Triangle(std::cin)), 1);
	list.insert(PFig(new Triangle(std::cin)), 2);
	list.print_all();
    return 0;
}

