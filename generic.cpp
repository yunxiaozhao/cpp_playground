#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
// #include <xutility>

using namespace std;
using namespace std::placeholders;

void eliminate_duplications(vector<int> &);
bool is_smaller(const int, const int);
bool find_n(vector<int> &, int);

int main()
{
    vector<int> a{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 12, 2};
    for_each(begin(a), end(a), [](int &i)
             { i *= 2; });
    vector<double> vecd;

    // fill_n算法
    fill_n(back_insert_iterator(vecd), 10, 3.14);

    // 替代复制算法
    vector<int> veci;
    replace_copy(cbegin(vecd), cend(vecd), back_insert_iterator(veci), 3.14, 6.18);

    // 去重复
    eliminate_duplications(a);
    ostream_iterator<int> out(cout, " ");
    copy(cbegin(a), cend(a), out);
    cout << endl;

    // C++ 11 bind
    auto find_3 = bind(find_n, _1, 3);
    cout << find_3(a) << endl;

    //流迭代器
    istream_iterator<int> iiter(cin), eof;
    cout << accumulate(iiter, eof, 0) << endl;
    return EXIT_SUCCESS;
}

void eliminate_duplications(vector<int> &a)
{
    stable_sort(begin(a), end(a), is_smaller);
    // unique算法，返回不重复的尾后指针
    auto unique_end = unique(begin(a), end(a));
    a.erase(unique_end, end(a));
    a.shrink_to_fit();
}

bool is_smaller(const int i1, const int i2)
{
    return i1 < i2;
}

bool find_n(vector<int> &veci, int n)
{
    // find_if和lambda表达式
    auto find = find_if(begin(veci), end(veci), [=](const int a)
                        { return a == n; });
    if (find != end(veci))
    {
        return true;
    }
    return false;
}
