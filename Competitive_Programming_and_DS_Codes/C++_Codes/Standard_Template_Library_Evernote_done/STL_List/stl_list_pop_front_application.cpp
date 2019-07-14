// https://www.geeksforgeeks.org/listpop_front-listpop_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist{}, newlist{};
    mylist.push_front(8);
    mylist.push_front(7);
    mylist.push_front(6);
    mylist.push_front(5);
    mylist.push_front(4);
    mylist.push_front(3);
    mylist.push_front(2);
    mylist.push_front(1);

    // list becomes 1, 2, 3, 4, 5, 6, 7, 8

    while (!mylist.empty()) {
        newlist.push_front(mylist.front());
        mylist.pop_front();
    }
    for (auto it = newlist.begin(); it != newlist.end(); ++it)
        cout << ' ' << *it;
}
