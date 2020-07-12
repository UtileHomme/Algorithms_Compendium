// https://www.geeksforgeeks.org/stdmax-in-cpp/

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
  return (a<b);
}

int main()
{

  cout<<max('a','b',compare)<<endl;

  //returns the first one if both the numbers are same
  cout<<max(7,7,compare);

  return 0;
}

/*
Syntax

template
constexpr const T& max (const T& a, const T& b, Compare comp);

Here, a and b are the numbers to be compared.

comp: Binary function that accepts two values of type T as arguments,
and returns a value convertible to bool.
The value returned indicates whether the element passed as f
irst argument is considered less than the second.

The function shall not modify any of its arguments.
This can either be a function pointer or a function object.

Returns: Larger of the two values.

*/
