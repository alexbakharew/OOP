#include <iostream>
//#include "hash_table.h"
#include <vector>
using IFPtr = std::shared_ptr<Figure>;
struct MyHash
{
    std::size_t operator()(const Triangle& p) const noexcept
    {
        std::size_t h1 = std::hash<int>{}(p.SemiPerimetr());
        std::size_t h2 = std::hash<int>{}(p.Square());
        return h1 ^ (h2 << 1); // or use boost::hash_combine (see Discussion)
    }
    std::size_t operator()(const EquTriangle& p) const noexcept
    {
        std::size_t h1 = std::hash<int>{}(p.SemiPerimetr());
        std::size_t h2 = std::hash<int>{}(p.Square());
        return (h1 >> 1) ^ (h2 << 1); // or use boost::hash_combine (see Discussion)
    }
    std::size_t operator()(const IFPtr& p) const noexcept
    {
        std::size_t h1 = std::hash<int>{}(p->SemiPerimetr());
        std::size_t h2 = std::hash<int>{}(p->Square());
        return h1  ^ (h2 << 1);
    }
};
template<class T>
class unordered_set
{
public:
    unordered_set();
    ~unordered_set(){}
    void push(const T&);
    bool find(const T&);
    void erase(const T&);
private:
    std::vector<std::vector<T> > table;
    size_t size = 100;
};

template <class T>
unordered_set<T>::unordered_set()
{
    table.resize(size);
}

template <class T>
void unordered_set<T>::push(const T& n)
{
    size_t hash = MyHash{}(n);
    table[hash % size].push_back(n);
}

template <class T>
bool unordered_set<T>::find(const T& n)
{
    size_t hash = MyHash{}(n);
    if(!table[hash % size].empty())
        return true;
    else return false;
}

template <class T>
void unordered_set<T>::erase(const T& n)
{
    size_t hash = MyHash{}(n);
    for(int i = 0; i < table[hash % size].size(); ++i)
    {
        if(table[hash % size][i] == n)
        {
            table[hash % size].erase(table[hash % size].begin() + i);
            return;
        }
    }
}
