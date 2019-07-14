// https://www.interviewbit.com/problems/palindrome-string/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int freqindex(char c)
  {
    int index = -1;

    int l = 22;

    if(c>='a' && c<='z')
    {
      return c-'a';
    }
    else if(c>='A' && c<='Z')
    {
      return c-'A';
    }
    else if(c>='1' && c<='9')
    {
      return c - char(l) - 1;
    }

    return index;
  }

  void freqarray(string A, int *freq)
  {
    int index;

    for(auto c:A)
    {
      index = freqindex(c);

      if(index!=-1)
      {
        freq[index]++;
      }
    }
  }

  int isPalindrome(string A)
  {
    int freq[36] = {0};

    freqarray(A, freq);

    bool oddOccurence = false;

    for(int i=0;i<36;i++)
    {
      if(freq[i]%2==1 && oddOccurence == true)
      {
        return 0;
      }
      else if(freq[i]%2==1 && oddOccurence == false)
      {
        oddOccurence = true;
      }
    }

    return 1;
  }

};

int main()
{
  Solution s;

  string A = "A man, a plan, a canal: Panama";
  int k = s.isPalindrome(A);

  cout<<k;
  return 0;
}
