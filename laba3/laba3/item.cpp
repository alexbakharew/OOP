#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
TItem::TItem(const PFig& fgr)
{
	figure = fgr;
	next = nullptr;
	prev = nullptr;
}
TItem::~TItem(){}
PTItem TItem::get_next()
{
	return next;
}
PTItem TItem::get_prev()
{
	return prev;
}
PFig TItem::get_figure() 
{
	return figure;
}
void TItem::set_next(PTItem nxt)
{
	next = nxt;
}
void TItem::set_prev(PTItem prv)
{
	prev = prv;
}
std::ostream& operator<<(std::ostream& os, const TItem& item)
{
	os << item.get_figure().get() << std::endl;
	return os;
}