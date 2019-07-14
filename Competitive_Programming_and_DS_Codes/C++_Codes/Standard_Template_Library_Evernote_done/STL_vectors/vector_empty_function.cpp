// https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector <int> vect{};

  if(vect.empty())
  {
    cout<<"True"<<endl;
  }
  else
  {
    cout<<"False"<<endl;
  }

  return 0;
}
