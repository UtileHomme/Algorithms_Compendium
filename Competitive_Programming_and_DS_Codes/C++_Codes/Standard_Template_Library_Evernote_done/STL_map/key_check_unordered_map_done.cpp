// https://www.geeksforgeeks.org/?p=160121

#include <iostream>
#include <unordered_map>

using namespace std;

string check_key(unordered_map<int,int> m, int key)
{
  if (m.find(key) == m.end())
      return "Not Present";

  return "Present";
}

int main()
{
  unordered_map<int, int> m;

  m[1] = 3;
  m[2] = 6;
  m[4] = 6;

  int check1=5, check2=4;

  cout<<check1<<": "<<check_key(m, check1)<<endl;
  cout<<check2<<": "<<check_key(m, check2)<<endl;
}
