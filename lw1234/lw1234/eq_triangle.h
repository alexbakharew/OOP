#ifndef EQ_TRIANGLE_H
#define EQ_TRIANGLE_H
#include <cstdlib>
#include "triangle.h"
class EquTriangle : public Triangle
{//Equaliateral triangle
public:
    explicit EquTriangle() {}
    explicit EquTriangle(int a);
    ~EquTriangle() override;

    void Input() override;
    void Output() const override;
    double Square() const override;
    double SemiPerimetr() const override;

    bool operator == (const EquTriangle& t);
    void operator = (const EquTriangle& t);

private:
    int side;
};
#endif // EQ_TRIANGLE_H
