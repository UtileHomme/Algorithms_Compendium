// https://www.geeksforgeeks.org/listpop_front-listpop_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist{}, newlist{};
    mylist.push_front(82);
    mylist.push_front(73);
    mylist.push_front(64);
    mylist.push_front(57);
    mylist.push_front(43);
    mylist.push_front(39);
    mylist.push_front(20);
    mylist.push_front(1);

    // list becomes 1, 20, 39, 43, 57, 64, 73, 82

    while (!mylist.empty()) {
        newlist.push_back(mylist.back());
        mylist.pop_back();
    }
    for (auto it = newlist.begin(); it != newlist.end(); ++it)
        cout << ' ' << *it;
}
