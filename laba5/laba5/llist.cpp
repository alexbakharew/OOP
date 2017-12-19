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
#include "iterator.h"

template<class T>
TLList<T>::TLList() : root(nullptr) {}
/*{
	std::cout << "Creation of List" << std::endl;
	root = nullptr;
	std::cout << "List created successfully" << std::endl;
}*/
template<class T>
TLList<T>::~TLList()
{
	std::cout << "Deletion of list" << std::endl;
	while(remove(0)){}
	std::cout << "list was deleted!" << std::endl;
}
template<class T>
std::shared_ptr<TItem<T>> TLList<T>::get_root()
{
	return root;
}
template<class T>
std::shared_ptr<TItem<T>> TLList<T>::move_to(size_t n)
{
	std::shared_ptr<TItem<T>> curr = get_root();
	if (curr == nullptr) return curr;
	int i = 0;
	while (i != n)
	{
		if (curr.get()->get_next() != nullptr)
		{
			curr = (curr.get())->get_next();
			i++;
		}
		else
		{
			return curr;
		}
	}
	return curr;
}
template<class T>
void TLList<T>::insert(const std::shared_ptr<T>& fig, size_t n)
{
	std::shared_ptr<TItem<T>> curr = move_to(n);
	std::shared_ptr<TItem<T>> item(new TItem<T>(fig));
	if (curr == nullptr)
	{
		root = item;
		return;
	}
	std::shared_ptr<TItem<T>> next = (curr.get())->get_next();
	(item.get())->set_next(next);
	(item.get())->set_prev(curr);
	(curr.get())->set_next(item);
	if (next == nullptr) return;
	else
	{
		next.get()->set_prev(item);
		return;
	}
}
template<class T>
void TLList<T>::print_i(size_t n)
{
	std::shared_ptr<TItem<T>> curr = move_to(n);
	if (curr == nullptr)
	{
		std::cout << "List is empty!" << std::endl;
		return;
	}
	std::cout << curr << std::endl;
	return;
}
template<class T>
void TLList<T>::print_all()
{
	std::shared_ptr<TItem<T>> curr = get_root();
	if (curr == nullptr)
	{
		std::cout << "List is empty!" << std::endl;
		return;
	}
	while (curr != nullptr)
	{
		std::cout << curr << std::endl;
		curr = curr.get()->get_next();
	}
	return;
}
template<class T>
bool TLList<T>::remove(size_t n)
{
	std::shared_ptr<TItem<T>> curr = move_to(n);
	if (curr == nullptr)
	{
		std::cout << "List is empty!" << std::endl;
		return false;
	}
	std::shared_ptr<TItem<T>> next = curr.get()->get_next();
	std::shared_ptr<TItem<T>> prev = curr.get()->get_prev();
	if (prev == nullptr && next == nullptr)//only 1 elem in list!
	{
		root = nullptr;
		return true;
	}
	else if (prev == nullptr && next != nullptr)// we want to delete root
	{
		root = next;
		next.get()->set_prev(prev);
		return true;
	}
	else if (prev != nullptr && next == nullptr)
	{
		prev.get()->set_next(next);
		return true;
	}
	else
	{
		prev.get()->set_next(next);
		next.get()->set_prev(prev);
		return true;
	}
}
template<class T>
TIterator<TItem<T>, T> TLList<T>::begin()
{
	return TIterator<TItem<T>, T>(root);
}
template<class T>
TIterator<TItem<T>, T> TLList<T>::end()
{
	return TIterator<TItem<T>, T>(nullptr);
}
template TLList<IFigure>;
template<typename T>
std::ostream& operator<<(std::ostream& os, const TLList<T>& list)
{
	list.print_all();
	return os;
}