#include "../headers/stdafx.h"
#include <iostream>
#include <cstdlib>
#include "../headers/allocator.h"

int main()
{
	TAllocator alloc(sizeof(int), 100);
	system("PAUSE");
	alloc.~TAllocator();
	system("PAUSE");
    return 0;
}

