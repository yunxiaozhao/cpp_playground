#include <iostream>

class C
{
public:
    int i;
};

int main()
{
    int a = 1;
    int b = 2;
    C c{};
    std::cout << c.i;
    return 0;
}