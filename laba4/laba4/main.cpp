#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <memory>
#include <iomanip>
#include "figure.h"
#include "hexagon.h"
#include "octagon.h"
#include "triangle.h"
#include "item.h"
int main()
{
	int a = 10;
	TItem<int> item(a);
	std::cout << item << std::endl;
	system("PAUSE");
    return 0;
}

