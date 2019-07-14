// https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int count = 0;

  vector <int>myvector;

  myvector.push_back(1);
  myvector.push_back(2);
  myvector.push_back(3);
  myvector.push_back(4);
  myvector.push_back(5);
  myvector.push_back(6);

  while(!myvector.empty())
  {
    count++;
    myvector.pop_back();
  }

  cout<<count;

  return 0;
}
