// https://www.geeksforgeeks.org/stdmax-in-cpp/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  cout<<max('a','b')<<endl;

  //returns the first one if both the numbers are same
  cout<<max(7,7);

  return 0;
}

/*
Syntax

template  constexpr const T& max (const T& a, const T& b);

Here, a and b are the numbers to be compared.
Returns: Larger of the two values.

*/
