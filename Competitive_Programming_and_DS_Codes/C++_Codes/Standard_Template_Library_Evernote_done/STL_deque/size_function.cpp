// https://www.geeksforgeeks.org/dequeempty-dequesize-c-stl/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;
    mydeque.push_back(1);
    mydeque.push_back(8);
    mydeque.push_back(3);
    mydeque.push_back(6);
    mydeque.push_back(2);

    // Deque becomes 1, 8, 3, 6, 2

    cout << mydeque.size();

    return 0;
}
