#include <class.hpp>
#include <iostream>
#include <vector>

My_class::this_int My_class::get_a() const
{
    return a;
}

void f(My_class *my)
{
    std::cout << my->a << std::endl;
}

const int My_class::sci;

constexpr int cer(int i)
{
    int a = i;
    a += 1;
    return a;
}

int main()
{
    My_class my{42};

    std::string s {"string to class"};
    std::vector<My_class> vc{static_cast<My_class>(s)};
    std::cout << std::size(vc) << " " << vc.max_size() << std::endl;
    std::cout << My_class::sci << ' ' << my.scd << std::endl;
    std::cout << std::cout.rdstate();
    vc.cbegin()++;

    return 0;
}