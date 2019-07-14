// CCI (Page 32) Example 12

#include <iostream>
#include <cstring>

using namespace std;

void permutation(string str, string prefix)
{
  if(str.length()==0)
  {
    cout<<prefix<<endl;
  }
  else
  {
    for(int i=0;i<str.length();i++)
    {
      string rem = str.substr(0,i) + str.substr(i+1);
      permutation(rem, prefix + str.at(i));
    }
  }
}

void permutation(string str)
{
  permutation(str, "");
}



int main()
{
  string str = "jat";

  permutation(str);

  return 0;
}
