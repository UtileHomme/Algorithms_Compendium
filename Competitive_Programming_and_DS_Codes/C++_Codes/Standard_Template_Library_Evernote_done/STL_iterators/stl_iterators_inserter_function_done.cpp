// https://www.geeksforgeeks.org/?p=138530

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  vector<int> ar = {1,2,3,4,5};
  vector<int> ar1 = {10,20,30};

  vector<int>::iterator ptr = ar.begin();

  advance(ptr, 2);

  //starting position of array to be inserted, ending position, inserter function for desired array and position
  copy(ar1.begin(), ar1.end(), inserter(ar,ptr));

  cout<<"The new vector after inserting elements is: ";
  for(int &x : ar)
  {
    cout<<x<<" ";
  }
  return 0;
}
