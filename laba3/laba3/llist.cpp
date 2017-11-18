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
TLList::TLList()
{
	std::cout << "Creation of List" << std::endl;
	root = nullptr;
	std::cout << "List created successfully" << std::endl;
}
TLList::~TLList()
{

}
PTItem* TLList::get_root()
{
	return root;
}
PTItem* TLList::move_to(size_t n) // 0 <= n <= length
{
	PTItem* curr = get_root();
	int i = 0;
	while (curr != nullptr && i != n)
	{
		curr = curr->get()->get_next();
		i++;
	}
	return curr;
}
void TLList::insert(const PFig& fig, size_t n)
{
	PTItem* curr = move_to(n);
	PTItem* item = new PTItem(new TItem(fig));
	if (curr == nullptr)
	{
		root = item;
		return;
	}
	PTItem* next = curr->get()->get_next();
	item->get()->set_next(next);
	item->get()->set_prev(curr);
	return;
}
void TLList::print_i(size_t n)
{
	PTItem* curr = move_to(n);
	std::cout << curr << std::endl;
	return;
}
void TLList::print_all()
{
	PTItem* curr = get_root();
	while (curr != nullptr)
	{
		std::cout << curr << std::endl;
		curr->get()->set_next(curr->get()->get_next());
	}
	return;
}
void TLList::remove(size_t n)
{
	PTItem* curr = move_to(n);
	curr->get()->get_prev()->get()->set_next(curr->get()->get_next());
	curr->get()->get_next()->get()->set_prev(curr->get()->get_prev());
	delete curr;
	return;
}