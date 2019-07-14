// https://www.geeksforgeeks.org/listpush_front-listpush_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist{};
    mylist.push_front(43);
    mylist.push_front(58);
    mylist.push_front(24);
    mylist.push_front(6);
    mylist.push_front(45);
    mylist.push_front(89);
    mylist.push_front(7);

    // list becomes 7, 89, 45, 6, 24, 58, 43
    // Sorting function

    mylist.sort();

    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}
