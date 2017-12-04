#pragma once
#include <iostream>
#include <cstdlib>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
#include "iterator.h"
template<class T>
class TLList
{
public:
	TLList();
	~TLList();
	void insert(const std::shared_ptr<T>&, size_t);
	void print_i(size_t);
	bool remove(size_t);
	void print_all();
	template<typename K>
	friend std::ostream& operator<<(std::ostream&, const TLList<K>&);
	TIterator<TItem<T>, T> begin();
	TIterator<TItem<T>, T> end();
private:
	std::shared_ptr<TItem<T>> get_root();
	std::shared_ptr<TItem<T>> move_to(size_t);
	std::shared_ptr<TItem<T>> root;
};

