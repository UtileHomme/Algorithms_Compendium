// https://www.geeksforgeeks.org/dequeclear-dequeerase-c-stl/

#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> mydeque{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto i = mydeque.begin(); i != mydeque.end(); ++i) {
        if (*i % 2 == 0) {
            mydeque.erase(i);
            i--;
        }
    }

    // Printing the deque
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
