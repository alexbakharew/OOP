#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "queue.h"
TQueue::TQueue()
{
	begin = end = nullptr;
	size = 0;
}
bool TQueue::push(void* ptr)
{
	elem* tmp = new elem;
	if (tmp == nullptr) return false;
	if (size == 0)
	{
		tmp->pointer = ptr;
		begin = end = tmp;
		tmp->next = tmp->prev = nullptr;
		size++;
		return true;
	}
	tmp->pointer = ptr;
	begin->prev = tmp;
	tmp->next = begin;
	tmp->prev = nullptr;
	begin = tmp;
	size++;
	return true;

}
void* TQueue::pop()
{
	elem* tmp = end;
	if (size == 0) return nullptr;
	if (size == 1)
	{
		void* tmp_ptr = tmp->pointer;
		delete tmp;
		tmp = nullptr;
		begin = end = nullptr;
		size--;
		return tmp_ptr;
	}
	end = end->prev;
	end->next = nullptr;
	void* tmp_ptr = tmp->pointer;
	delete tmp;
	tmp = nullptr;
	size--;
	return tmp_ptr;
}
bool TQueue::is_empty()
{
	return size > 0;
}
TQueue::~TQueue()
{
	while (size != 0)
	{
		pop();
	}
}