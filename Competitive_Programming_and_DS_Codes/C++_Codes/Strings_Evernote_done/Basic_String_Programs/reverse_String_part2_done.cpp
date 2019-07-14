// https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    string str = "geeksforgeekgs";

    // Reverses elements in [begin, end]
    // void reverse (BidirectionalIterator begin,
    // BidirectionalIterator end);

    reverse(str.begin(), str.end());

    cout<<str;

    return 0;
}
