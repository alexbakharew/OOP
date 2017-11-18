#include <iostream>
#include <cstdlib>
#include <vector>
#include "hexagon.h"
#include "stdafx.h"
#include "TTreeItem.h"
TTreeItem::TTreeItem()
{
	size = 128;
	nodes[size];
	parent = nullptr;
	std::cout << "Element was created successfully by default value" << std::endl;
}
TTreeItem::~TTreeItem()
{
//	std::cout << "Element was deleted" << std::endl;
}
std::istream& operator>>(std::istream& is, std::shared_ptr<TTreeItem> item)
{
	is >> item->;
	return is;
}
std::ostream& operator<<(std::ostream& os, const TTreeItem* item)
{
	if(item->parent == nullptr) os<< "THIS IS ROOT OF THE TREE!" << std::endl;
	os << item->hxgn << std::endl;
	return os;
}
void TTreeItem::move_forward(std::shared_ptr<TTreeItem>& ptr)
{
	int n;
	std::cout << "In which node you want to move?" << std::endl;
	std::cin >> n;
	if (n >= size)
	{
		std::cout << "No node with this number" << std::endl;
		return;
	}
	else
	{
		ptr = nodes[n];
		return;
	}
}
void TTreeItem::move_back(std::shared_ptr<TTreeItem>& ptr)
{
	if (parent != nullptr)
	{
		ptr = ptr->parent;
		return;
	}
	else
	{
		std::cout << "You are in root! Can't move back..." << std::endl;
	}
}
std::shared_ptr<TTreeItem> TTreeItem::operator=(const std::shared_ptr<TTreeItem> right)
{
	hxgn = right->hxgn;
	parent = right->parent;
	memcpy(nodes, right->nodes, size * sizeof(std::shared_ptr<TTreeItem>));
	return std::shared_ptr<TTreeItem>(this);
}
bool TTreeItem::add(std::shared_ptr<TTreeItem> item, size_t n)
{
	if (n >= size)
	{
		std::shared_ptr<TTreeItem> new_item(new TTreeItem());
		std::cin >> new_item;
		nodes[n] = item;
	}
	else return false;
}
/*bool TTreeItem::remove(size_t n)
{
	if (n >= size) 
	{
		delete nodes[n];
		//std::cout << "Element was deleted" << std::endl;
		return true;
	}
	else
	{
		std::cout << "There is no elem with such number" << std::endl;
		return false;
	}
}
*/