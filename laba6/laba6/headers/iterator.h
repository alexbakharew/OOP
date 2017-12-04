#pragma once
#include <iostream>
#include <cstdlib>
#include <memory>
template <class node, class T> 
class TIterator
{
public:
	TIterator(std::shared_ptr<node> node)
	{
		node_ptr = node;
		std::cout << "Iter created successfully!" << std::endl;
	}
	~TIterator()
	{
		std::cout << "Iter was deleted!" << std::endl;
	}
    void operator ++()
	{
		node_ptr = node_ptr.get()->get_next();
	}
	/*TIterator operator ++(int)
	{
		TIterator iter(*this);
		++(this);
		return iter;
	}*/
	void operator --()
	{
		node_ptr = node_ptr.get()->get_prev();
	}
	std::shared_ptr<TItem<T>> operator *()
	{
		return node_ptr;
	}
	std::shared_ptr<TItem<T>> operator ->()
	{
		return node_ptr;
	}
	bool operator ==(TIterator const& iter)
	{
		return node_ptr == iter.node_ptr;
	}
	bool operator !=(TIterator const& iter)
	{
		return node_ptr != iter.node_ptr;
	}
private:
	std::shared_ptr<node> node_ptr;
};