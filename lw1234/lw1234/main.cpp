#include <iostream>
#include <cmath>
#include <memory>
//#include <set>
//#include <stack>
//#include <queue>
//#include <deque>
//#include <map>
#include <vector>

#include "triangle.h"
#include "eq_triangle.h"
//#include "hash_table.h"
#include "hash_table.cpp"
using TPtr = std::shared_ptr<Triangle>;
using IFPtr = std::shared_ptr<Figure>;


int main()
{
    unordered_set<IFPtr> table;
    IFPtr t = std::make_shared<Triangle>(3, 4, 5);
    table.push(t);
    if(table.find(t))
        std::cout<<"OK\n";
    table.erase(t);
    table.erase(t);
    std::cout<<"OK\n";
    return 0;
}
