#include "triangle.h"
#include <cstdlib>
#include <iostream>

template<class T>
class cls
{
public:
	cls();
	~cls();
private:
	void set_root(T,T);
	Triangle root;
};
template<typename T>
cls<T>::cls()
{
}
template<typename T>
cls<T>::~cls()
{
}
template<typename T>
void cls<T>::set_root(T t1, T t2)
{
	root = t1+t2;
}
main()
{
	cls<Triangle> t;
	Triangle trngl1(std::cin);
	Triangle trngl2(std::cin);
	t.set_root(trngl1, trngl2);
}
