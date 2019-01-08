#ifndef FIGURE_H
#define FIGURE_H
class Figure
{
public:
    Figure() {}
    virtual ~Figure() {}
    virtual void Input() = 0;
    virtual void Output() const = 0;
    virtual double Square() const = 0;
    virtual double SemiPerimetr() const = 0;
    void TestMethod()
    {
        std::cout << "TEST\n";
    }
};
#endif // FIGURE_H
