#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "allocator.h"
#include "queue.h"
#include "item.h"
#include "item.cpp"
//#include "llist.h"

int main()
{
	TAllocator alloc(sizeof(int), 100);
	int* p1 = (int*)alloc.allocate();
	*p1 = 2;
	std::cout << p1 << " " << *p1 << std::endl;
	//std::shared_ptr<Triangle> tr(new Triangle(std::cin));
	//TItem<Triangle> t1(tr);
	system("PAUSE");
    return 0;
}

