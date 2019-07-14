// https://www.geeksforgeeks.org/?p=156643

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  vector <int> v = {0,1,2,3,4,5};

  for(auto i:v)
  {
    cout<<i<<" ";
  }

  cout<<endl;

  for(int n: {0,1,2,3,4,5})
  {
    cout<<n<<" ";
  }

  cout<<endl;

  int a[] = {0,1,2,3,4,5};

  for(int n:a)
  {
    cout<<n<<" ";
  }
  cout<<endl;

  for(int n:a)
  {
    cout<<"In Loop"<<" ";
  }
  cout<<endl;

  string str = "Geeks";
  for(char c: str)
  {
    cout<<c<<" ";
  }

  cout<<endl;

  map<int,int>map({{1,1},{2,2},{3,3}});

  for(auto i:map)
  {
    cout<<"{"<<i.first<<","<<i.second<<"}"<<endl;
  }

  return 0;
}
