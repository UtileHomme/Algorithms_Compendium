// https://www.geeksforgeeks.org/?p=24927

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int findCeil(string s, char first, int l, int h)
{
  int ceilIndex = l;

  for(int i=l+1; i<=h; i++)
  {
    if(s[i]>first && s[i]<s[ceilIndex])
    {
      ceilIndex = i;
    }
  }

  return ceilIndex;
}

void sortedPermutations(string &s)
{
  int size =s.length();

  sort(s.begin(), s.end());

  //tracks whether all permutations have been printed or not
  bool isFinished = false;

  while(!isFinished)
  {
    cout<<s<<endl;

    int i;

    //Find the rightmost character which is smaller than its next character
    //it's called the "first character"
    for(i=size-2; i>=0;i--)
    {
      if(s[i]<s[i+1])
      {
        break;
      }
    }

    //if there is no such character, all are sorted in decreasing order,
    //means we just printed the last permutation and we are done
    if(i==-1)
    {
      isFinished=true;
    }
    else
    {
      //Find the ceil of "first char" in right of the first character
      //Ceil of a character is the smallest character greater than it
      int ceilIndex = findCeil(s, s[i], i+1, size-1);

      //swap the ceil and the first character
      swap(s[i], s[ceilIndex]);

      //sort the elements after the first character in ascending order
      reverse(s.begin()+i+1, s.end());
    }
  }
}

int main()
{
  string str = "BACD";

  sortedPermutations(str);
  return 0;
}
