#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <memory>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
template<typename T>
TItem<T>::TItem(const T& itm)
{
	item = itm;
	next = prev = nullptr;
}
//template<class T>
//TItem<T>::~TItem() {}
template<class T>
TItem<T> TItem<T>::get_next()
{
	return next;
}
template<class T>
TItem<T> TItem<T>::get_prev()
{
	return prev;
}
template<class T>
TItem<T> TItem<T>::get_item()
{
	return item;
}
template<class T>
void TItem<T>::set_next(TItem<T> nxt)
{
	next = nxt;
}
template<class T>
void TItem<T>::set_prev(TItem<T> prv)
{
	prev = prv;
}
template<class T>
std::ostream& operator<<(std::ostream& os, const TItem<T>& item)
{
	os << item.get() << std::endl;
	//os << item.get()->figure.get()->Print() << std::endl;
	return os;
}