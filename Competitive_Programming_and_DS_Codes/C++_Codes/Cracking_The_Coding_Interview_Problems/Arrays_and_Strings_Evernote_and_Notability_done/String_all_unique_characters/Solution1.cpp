// Problem 1.1 (Page 60)

// Is Unique:
// Implement an algorithm to determine if a string has all unique characters. What if we cannot use addition datastructures?


#include <iostream>
#include <string>

using namespace std;

bool isUnique(string s)
{
  int len = s.length();

  int flag = 0;
  for(int i=0;i<len;i++)
  {
    for(int j=0;j<len;j++)
    {
      if(i!=j)
      {
        if(s[i]==s[j])
        {
          flag=1;
          break;
        }
        else
        {
          flag=0;
        }
      }
    }
  }

  if(flag==1)
  {
    return false;
  }
  else
  {
    return true;
  }

}

int main()
{
  string s = "GeeksforGeeks";

  bool test = isUnique(s);

  if(test==true)
  {
    cout<<"All the characters in the string are unique"<<endl;
  }
  else
  {
    cout<<"No unique characters in the string"<<endl;

  }

  return 0;
}

// Time Complexity = O(n^2)
