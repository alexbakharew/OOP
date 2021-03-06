#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "allocator.h"
#include "queue.h"
#include "item.h"
#include "llist.h"
#include "item.cpp"
//#include "llist.h"
void TestAllocationBlock()
{
	TAllocator alloc(sizeof(int), 100);
	int* p1 = nullptr;
	int* p2 = nullptr;
	int* p3 = nullptr;
	int* p4 = nullptr;
	p1 = (int*)alloc.allocate();
	p2 = (int*)alloc.allocate();
	p3 = (int*)alloc.allocate();
	p4 = (int*)alloc.allocate();
	*p1 = 1;
	*p2 = 2;
	*p3 = 3;
	*p4 = 4;
	std::cout << p1 << " " << *p1 << std::endl;
	std::cout << p2 << " " << *p2 << std::endl;
	std::cout << p3 << " " << *p3 << std::endl;
	std::cout << p4 << " " << *p4 << std::endl;
	alloc.deallocate(p1);
	p1 = (int*)alloc.allocate();
	*p1 = 1000;
	std::cout << p1 << " " << *p1 << std::endl;
	alloc.deallocate(p1);
	alloc.deallocate(p2);
	alloc.deallocate(p3);
	alloc.deallocate(p4);
}
int main()
{
	TestAllocationBlock();
	std::cout << "------------------------" << std::endl;
	TLList<IFigure> list;
	list.insert(std::shared_ptr<Triangle>(new Triangle(std::cin)), 0);
	list.insert(std::shared_ptr<Hexagon>(new Hexagon(std::cin)), 0);
	list.insert(std::shared_ptr<Octagon>(new Octagon(std::cin)), 0);
	list.remove(0);
	list.remove(0);
	list.remove(0);
	system("PAUSE");
    return 0;
}

