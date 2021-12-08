#include <iostream>

int main()
{
    int a = 1;
    int &b = a;
    int &c = b;
    int *p = &a;
    double d = 3.;
    int *k = &a, **p1 = &k;
    std::cout << **p1;
    const int ci = 1;
    const int &cs = ci;
    int const k1 = 3;
    int const *const *const kk = &p;
    std::cout << **kk;
    using kkkk = int *;
    kkkk aaa = &a;
    int constexpr ka11 = 1;
    std::cout << *aaa << ka11;
}