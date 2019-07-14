// https://www.geeksforgeeks.org/vectorpush_back-vectorpop_back-c-stl/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> myvector{1,2,3,4,5};
  myvector.push_back(6);

  for(auto it = myvector.begin(); it!=myvector.end();it++)
  {
    cout<<" "<<*it;
  }
}
