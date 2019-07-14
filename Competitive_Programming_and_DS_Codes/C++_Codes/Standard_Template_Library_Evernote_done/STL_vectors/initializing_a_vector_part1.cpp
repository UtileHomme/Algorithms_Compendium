// https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> vect;

  vect.push_back(10);
  vect.push_back(20);
  vect.push_back(30);

  for(int x : vect)
  {
    cout<<x<<" ";
  }

  return 0;
}
