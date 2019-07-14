// https://www.geeksforgeeks.org/passing-vector-function-cpp/

#include <iostream>
#include <vector>

using namespace std;

//passed by reference
void func(vector <int> &vect)
{
  vect.push_back(30);
}

int main()
{

  vector <int> vect;
  vect.push_back(10);
  vect.push_back(20);

  func(vect);

  for(int i=0;i<vect.size();i++)
  {
    cout<<vect[i]<<endl;
  }
  return 0;
}
