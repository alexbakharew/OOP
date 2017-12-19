#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "allocator.h"
//#include "item.h"
TAllocator::TAllocator(size_t sizeof_type, size_t space) : size(sizeof_type), amount(space)
{
	used_blocks = (char*)malloc(sizeof_type * space);
	for (size_t i = 0; i < space; i++)
	{
		free_blocks.push(&used_blocks[i] + i*sizeof_type);
	}
	vacant = space;
	std::cout << "Allocation of memory complete" << std::endl;
}
void* TAllocator::allocate()
{
	void* result = nullptr;
	if (vacant <= 0)
	{
		std::cout << "No free blocks!" << std::endl;
		return result;
	}
	else
	{
		result = free_blocks.pop();
		vacant--;
		std::cout << "Memory for item is allocated" << std::endl;
		return result;
	}
}
bool TAllocator::has_free_blocks()
{
	return free > 0;
}
void TAllocator::deallocate(void* ptr)
{
	free_blocks.push(ptr);
	vacant++;
	std::cout << "Deallocation complete" << std::endl;
}
TAllocator::~TAllocator()
{
	free(used_blocks);
	// Destruction of queue in destructor!
	std::cout << "All block was deallocated" << std::endl;
}