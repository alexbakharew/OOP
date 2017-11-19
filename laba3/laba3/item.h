#pragma once
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
class TItem;
typedef std::shared_ptr<TItem> PTItem; // Item of list with shared_ptr
typedef std::shared_ptr<IFigure> PFig;

class TItem
{
public:
	TItem(const PFig&);
	~TItem();
	PTItem get_next();
	PTItem get_prev();
	PFig get_figure();
	void set_next(PTItem);
	void set_prev(PTItem);
	friend std::ostream& operator<<(std::ostream&, const TItem&);
private:
	PFig figure;
	PTItem next;
	PTItem prev;
};