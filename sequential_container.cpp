#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <queue>

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

    cout << a1.capacity() << endl;
    a1.reserve(1234);
    cout << a1.capacity() << endl;


    auto b1 = begin(a1);
    swap(a1, a2);
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
    
    auto beg1 = begin(dmj);
    auto beg2 = begin(dmj) + 10;

    cout << "___________" << endl;

    cout << beg1->get_a() << endl;
    cout << (beg1 + 5)->get_a() << endl;
    dmj.insert(beg1 + 9, 99);
    // dmj.insert(beg2 + 1, 99);
    cout << beg1->get_a() << endl;
    cout << (beg1 + 5)->get_a() << endl;

    cout << "___________" << endl;

    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;
    dmj.insert(beg2 + 1, 99);
    cout << beg2->get_a() << endl;
    cout << (beg2 + 2)->get_a() << endl;

    queue<int, vector<int>> qv{a1};
    qv.push(12);
    

    return EXIT_SUCCESS;
}
