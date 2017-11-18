#pragma once
#include<cstdlib>
#include <memory>
#include <vector>
#include "hexagon.h"
#include "fig.h"
class TTreeItem
{
public:
	TTreeItem();
	~TTreeItem();
	void move_forward(std::shared_ptr<TTreeItem>); // You can move at one node
	void move_back(std::shared_ptr<TTreeItem>);
	std::shared_ptr<TTreeItem> operator=(const std::shared_ptr<TTreeItem>);
	bool remove(size_t);
	bool add(std::shared_ptr<TTreeItem>, size_t);
	friend std::ostream& operator<<(std::ostream&, const TTreeItem*);
	friend std::istream& operator>>(std::istream&, TTreeItem*);
	// item1 = item2 = item3 = item4;
private:
	std::shared_ptr<Figure> fig;
	size_t size;
	std::shared_ptr<TTreeItem> parent;
	std::shared_ptr<TTreeItem>* nodes;
};