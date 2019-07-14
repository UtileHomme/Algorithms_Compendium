// https://www.geeksforgeeks.org/stdmax_element-in-cpp/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int v[] = {'a','c','k','d','e','f','h'};

  int *i1;

  i1 = max_element(v, v+4);

  cout<<char(*i1)<<endl;

  return 0;
}

/*
Syntax

template
ForwardIterator max_element (ForwardIterator first, ForwardIterator last);

first: Forward iterator pointing to the beginning of the range.
last: Forward iterator pointing to the end of the range.

Return Value: It returns a pointer to the largest
element in the range, and in case if there are more than
one such element, then it points to the first one.

It points to the last in case the range is empty.

*/
