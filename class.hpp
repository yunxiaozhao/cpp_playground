#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>

class My_class
{
    friend void f(My_class *my);

private:
    int a = 42;

public:
    typedef int this_int;
    static const int sci = 3;
    static constexpr double scd = 3.14;
    My_class() = default;
    My_class(int _a) : a(_a)
    {
        f(this);
    }
    explicit My_class(char _a) : a(_a)
    {
        std::cout << typeid(_a).name();
    }
    explicit My_class(std::string _a)
    {
        std::cout << _a << std::endl;
    }
    this_int get_a() const;
};

void f(My_class *);
#endif