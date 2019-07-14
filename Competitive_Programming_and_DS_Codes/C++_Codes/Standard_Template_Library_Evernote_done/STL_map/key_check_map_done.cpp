// https://www.geeksforgeeks.org/?p=160121

#include <iostream>
#include <map>

using namespace std;

string check_key(map<int,int> m, int key)
{
  if (m.find(key) == m.end())
  {
      return "Not Present";
  }

  return "Present";
}

int main()
{
  map<int, int> m;

  m[1] = 3;
  m[2] = 6;
  m[4] = 6;

  int check1=5, check2=4;

  cout<<check1<<": "<<check_key(m, check1)<<endl;
  cout<<check2<<": "<<check_key(m, check2)<<endl;
}
