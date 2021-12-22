#include <iostream>
#include <vector>
#include <stdexcept>
#include <initializer_list>
#include <string>
#include <cstdlib>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::initializer_list;
using std::string;
using std::vector;

int *a[10];
vector<int> foo();
int *(*func())[10];
void print_arr(int **beg, int **end);
constexpr int return_num(int i);
void func1(int);
void func2(int);
auto funcfunc(void (*)(int)) -> void (*)(int);
// void (*funcfunc(void (*)(int)))(int);
// decltype(func1) *funcfunc(void (int));

int main(int argc, char *argv[])
{
#ifndef NDEBUG
    cout << __func__ << endl;
#endif
    cout << foo()[0] << endl;
    auto k = func();
    print_arr(begin(*k), end(*k));
    int i = 1;
    return_num(i);
    funcfunc (&func1)(100);
    
    return EXIT_SUCCESS;
}

vector<int> foo()
{
    return initializer_list<int>{1, 2, 3};
}

auto func() -> int *(*)[10]
{
    return &a;
}

void print_arr(int **beg, int **end)
{
    while (beg != end)
        cout << *beg++ << endl;
}

constexpr int return_num(int i)
{
    return i;
}

void func1(int a)
{
    cout << a << endl;
}

inline void func2(int a)
{
    cout << a * 2 << endl;
}

auto funcfunc(void (*func)(int)) -> void (*)(int)
{
    if (func == &func1)
        return &func2;
    else
    {
        void (*fp)(int a) = &func1;
        return fp;
    }
}