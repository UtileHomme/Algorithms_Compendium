// https://www.geeksforgeeks.org/listpush_front-listpush_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist{ 1, 2, 3, 4, 5 };
    mylist.push_front(6);

    // list becomes 6, 1, 2, 3, 4, 5

    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}
