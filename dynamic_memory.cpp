#include <iostream>
#include <string>
#include <memory>
#include <utility>

struct foo
{
    foo() = default;
    int a;
};

struct bar
{
    bar();
    int b;
};

bar::bar() = default;

int main()
{

    std::string a{"dfsdfsd"};
    std::string b(std::move(a));
    std::cout << a << std::endl;
    std::cout << b;

}

