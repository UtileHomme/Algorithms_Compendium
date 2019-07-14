// https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  //create a vector of size "n" with all values as 10
  vector <int> vect{10,20,30};

  for(int x : vect)
  {
    cout<<x<<" ";
  }

  return 0;
}
