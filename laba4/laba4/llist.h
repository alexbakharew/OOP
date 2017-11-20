#pragma once
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
template<class T>
class TLList
{
public:
	TLList();
	~TLList();
	std::shared_ptr<TItem<T>> get_root();
	std::shared_ptr<TItem<T>> move_to(size_t);
	void insert(const std::shared_ptr<T>&, size_t);
	void print_i(size_t);
	bool remove(size_t);
	void print_all();
private:
	std::shared_ptr<TItem<T>> root;
};