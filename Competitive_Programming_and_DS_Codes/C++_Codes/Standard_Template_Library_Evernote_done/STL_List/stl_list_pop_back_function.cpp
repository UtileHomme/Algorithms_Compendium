// https://www.geeksforgeeks.org/listpop_front-listpop_back-c-stl/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> mylist{ 1, 2, 3, 4, 5 };
    mylist.pop_back();

    // list becomes 1, 2, 3, 4

    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}
