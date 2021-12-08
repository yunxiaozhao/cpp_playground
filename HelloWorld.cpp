#include <iostream>

int a;

class C
{
    public: int a;
};

main()
{
    C c;
    std::cout << c.a;
    int *p = &a;
    return 0;
}