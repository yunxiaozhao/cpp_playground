#include <iostream>
#include <vector>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;

int main()
{
    int a;
    long long int lli = 3;
    long long unsigned int llui = -1;
    constexpr int ci = 0;
    cin >> a;
    switch (a)
    {
    case ci:
        cout << ci << endl;
        int ti;
    case 1:
        ti = 4;
    case 3:
        cout << ti << endl;
    }

    int j;
    for(int i = 10, j = 0; i > j; j++);
    cout << "completed.";

    for(auto i: {1, 2, 3, 4, 5})
        cout << i;

    auto iter = begin({1, 2, 3, 4, 5});
    cout << *iter << endl;

    int* p = nullptr;
    try
    {
        unsigned short i = 65535;
        i *= 2;
        cout << i << endl;
    }
    catch(const std::overflow_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}