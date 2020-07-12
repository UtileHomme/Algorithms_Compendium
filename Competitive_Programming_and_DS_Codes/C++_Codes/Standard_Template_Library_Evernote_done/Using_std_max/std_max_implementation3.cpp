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
  //compare function can be skipped
  cout<<max({1,2,3,4,5,10,-1,7},compare)<<endl;

  return 0;
}

/*
Syntax

template
constexpr T max (initializer_list il, Compare comp);

Here, comp is optional and can be skipped.
il: An initializer_list object.
Returns: Largest of all the values.

*/
