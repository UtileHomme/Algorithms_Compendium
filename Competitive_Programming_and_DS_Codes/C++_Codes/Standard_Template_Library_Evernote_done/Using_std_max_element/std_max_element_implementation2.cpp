// https://www.geeksforgeeks.org/stdmax_element-in-cpp/

#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
  return (a<b);
}


int main()
{

  int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };

  int *i1;

  // Finding the maximum value between the third and the
    // ninth element
  i1 = max_element(v + 2, v + 9, comp);

  cout<<*i1<<endl;

  return 0;
}

/*
Syntax

template
ForwardIterator max_element (ForwardIterator first, ForwardIterator last, Compare comp);

Here, first and last are the same as previous case.
comp: Binary function that accepts two elements
in the range as arguments, and returns a value convertible to bool.

The value returned indicates whether the element passed as first argument is considered less than the second.
The function shall not modify any of its arguments. This can either be a function pointer or a function object.

Return Value: It returns a pointer to the largest element
in the range, and in case if there are more than one such element,
then it points to the first one.
It points to the last in case the range is empty.

*/
