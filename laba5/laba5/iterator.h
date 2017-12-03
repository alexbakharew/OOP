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
    TIterator operator ++ ()
	{
		return node_ptr.get()->get_next();
	}
	TIterator operator -- ()
	{
		return node_ptr.get()->get_prev();
	}
	std::shared_ptr<T> operator *()
	{
		return node_ptr.get()->get_item();
	}
	std::shared_ptr<T> operator ->()
	{
		return node_ptr.get()->get_item();
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