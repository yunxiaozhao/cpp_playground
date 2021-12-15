#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;



int main()
{
   vector<int> vec(1000, 10);

   int *p = &vec[500];
   cout << (-500)[p] << endl;
   long int a = -1000;
   unsigned short int aa = 100;
   cout << a + aa << endl;
   auto aaa = reinterpret_cast<long long>(p);
   cout << aaa;  
   auto &yin = a;
   decltype(yin) byin = a;
   byin += 1;
   cout << a;
   const char ch{'a'};
   const char *chp = &ch;
   auto chh = const_cast<char *>(chp);
   *chh = 'k';
   cout << *chh << ch << endl;
   cout << reinterpret_cast<long long>(chh) << endl;
   cout << reinterpret_cast<long long>(chp) << endl;
   cout << reinterpret_cast<long long>(&ch) << endl;
   cout << a+++a;
}