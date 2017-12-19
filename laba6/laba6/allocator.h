#pragma once
#include <cstdlib>
#include "queue.h"
class TAllocator
{
public:
	TAllocator(size_t, size_t);
	void* allocate();
	void deallocate(void* pointer);
	bool has_free_blocks();
	~TAllocator();

private:
	size_t size;
	size_t amount;
	size_t vacant;
	char* used_blocks;
	TQueue free_blocks;
};