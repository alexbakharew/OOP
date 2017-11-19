#pragma once
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
class TItem;
typedef std::shared_ptr<TItem> PTItem; // wrapper for TItem using shared_ptr
typedef std::shared_ptr<IFigure> PFig; // wrapper for figures using shared_ptr

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
	friend std::ostream& operator<<(std::ostream&, const PTItem&);
private:
	PFig figure;
	PTItem next;
	PTItem prev;
};