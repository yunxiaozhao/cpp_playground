#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

using namespace std;

class My
{
public:
    My(int _a) : a(_a)
    {
    }

    void set_a(int _a)
    {
        a = _a;
    }

    int get_a()
    {
        return a;
    };

private:
    int a;
};

int main(int argc, char *argv[])
{
    vector<int> a1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> a2(10, 10);

    auto b1 = begin(a1);
    // swap(a1, a2);
    while (b1 != end(a2))
    {
        cout << *b1++ << endl;
    }
    auto &ai = a1.at(3);

    a1.emplace_back(11);
    auto it1 = begin(a1) + 10;
    cout << *it1 << endl;
    a1.insert(begin(a1), 0);
    cout << a1.capacity() << endl;
    cout << *it1 << endl;

    deque<My> dmi;

    for (int i = 1; i < 12; ++i)
    {
        dmi.emplace_back(i);
    }
    auto beg = begin(dmi);
    auto end = std::end(dmi);
    cout << beg->get_a() << endl;
    dmi.insert(beg + 3, 99);
    cout << beg->get_a() << endl;
    cout << (end - 1)->get_a() << endl;
    cout << (dmi.insert(end, 99))->get_a() << endl;
    cout << (end - 1)->get_a() << endl;

    deque<My> dmj;
    for (int j = 1; j < 22; ++j)
    {
        dmj.emplace_back(j);
    }
    
    auto realbeg = begin(dmj);
    auto beg2 = begin(dmj) + 10;

    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;
    dmj.insert(realbeg + 3, 99);
    //dmj.insert(beg2 + 1, 99);
    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;

    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;
    //dmj.insert(realbeg + 3, 99);
    dmj.insert(beg2 + 1, 99);
    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;

    return EXIT_SUCCESS;
}
