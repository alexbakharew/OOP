#pragma once
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "triangle.h"
#include "octagon.h"
template<class T>
class TItem
{
public:
	TItem(const T&);
	//~TItem<T>();
	TItem<T> get_next();
	TItem<T> get_prev();
	TItem<T> get_item();
	void set_next(TItem<T>);
	void set_prev(TItem<T>);
	//template <typename K>
	friend std::ostream& operator<<(std::ostream&, const TItem<T>&);
private:
	T item;
	TItem<T>* next;
	TItem<T>* prev;
};
