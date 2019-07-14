// https://www.geeksforgeeks.org/listpush_front-listpush_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> mylist{};
      mylist.push_back(7);
      mylist.push_back(89);
      mylist.push_back(45);
      mylist.push_back(6);
      mylist.push_back(24);
      mylist.push_back(58);
      mylist.push_back(43);

      // list becomes 7, 89, 45, 6, 24, 58, 43
      // Sorting function

      mylist.sort();

      for (auto it = mylist.begin(); it != mylist.end(); ++it)
          cout << ' ' << *it;
}
