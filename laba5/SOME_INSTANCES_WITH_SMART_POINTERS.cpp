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
	std::shared_ptr<Triangle> trngl(new Triangle(std::cin)); // Create shared_ptr to triangle
	TItem<Triangle> tr_item(trngl); // Create TItem using shared_ptr
	auto it = std::make_shared<TItem<Triangle>>(tr_item); // Create shared_ptr to <TItem<Triangle>> using make_shared
	std::shared_ptr<TItem<Triangle>> it(new TItem<Triangle>(trngl)) // Create shared_ptr to <TItem<Triangle>> using default constructor
}