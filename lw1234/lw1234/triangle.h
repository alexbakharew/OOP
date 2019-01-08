#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cstdlib>
#include "figure.h"
class Triangle : public Figure
{
public:
    Triangle() {}
    Triangle(int x, int y, int z);
    explicit Triangle(const Triangle& copy);
    ~Triangle() override;

    void Output() const override;
    double Square() const override;
    void Input() override;
    double SemiPerimetr() const override;

    bool operator == (const Triangle& t);
    void operator = (const Triangle& t);

private:
    static int count;
    int a;
    int b;
    int c;
};
#endif // TRIANGLE_H
