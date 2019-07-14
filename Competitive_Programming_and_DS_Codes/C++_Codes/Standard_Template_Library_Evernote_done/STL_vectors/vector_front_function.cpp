// https://www.geeksforgeeks.org/vectorfront-vectorback-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector <int> vect;

  vect.push_back(5);
  vect.push_back(4);
  vect.push_back(1);
  vect.push_back(7);
  vect.push_back(3);

  cout<<vect.front();
  return 0;
}
