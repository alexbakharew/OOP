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
	//std::shared_ptr<>
	TItem(const std::shared_ptr<T>&);
	~TItem();
	std::shared_ptr<TItem<T>> get_next();
	std::shared_ptr<TItem<T>> get_prev();
	std::shared_ptr<T> get_item();
	void set_next(std::shared_ptr<TItem<T>>);
	void set_prev(std::shared_ptr<TItem<T>>);
	template <typename K>
	friend std::ostream& operator<<(std::ostream&, const std::shared_ptr<TItem<K>>&);
private:
	std::shared_ptr<T> item;
	std::shared_ptr<TItem<T>> next;
	std::shared_ptr<TItem<T>> prev;
};

