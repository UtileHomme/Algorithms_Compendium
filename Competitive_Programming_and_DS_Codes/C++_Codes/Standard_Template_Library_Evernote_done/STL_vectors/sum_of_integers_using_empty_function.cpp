// https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  int sum = 0;

  vector <int> vect{1,5,6,3,9,2};

  while(!vect.empty())
  {
    sum = sum + vect.back();
    vect.pop_back();
  }

  cout<<sum;
  return 0;
}
