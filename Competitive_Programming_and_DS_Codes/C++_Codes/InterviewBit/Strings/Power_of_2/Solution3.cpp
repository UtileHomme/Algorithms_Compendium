// https://www.interviewbit.com/problems/power-of-2/

// https://www.geeksforgeeks.org/given-huge-number-check-power-two/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  bool Not_one(string A)
  {
    int size = A.size();

    if(size>1)
    {
      return 1;
    }

    if(A[0]!='1')
    {
      return 1;
    }
    return 0;
  }

  bool is_Even(string N)
  {
    //if "num" is even, then "num & 1" = 0
    int data = (N[N.size()-1]-'0')&1;

    if(data!=0)
    {
      return 0;
    }

    return 1;
  }

  string Divide(string A, int data)
  {
    reverse(A.begin(), A.end());

    long long base = 10;

    string temp = "";

    int rem = 0;
    for(int i= (int)A.size()-1; i>=0; --i)
    {
      long long cur = (A[i]-'0') + rem * base;

      int val = cur/data;

      rem = cur % data;

      temp = temp + (to_string(val));
    }

    //remove the zeroes from the beginning
    while(temp.size() && ((temp[0]-'0')==0))
    {
      temp.erase(temp.begin());
    }

    return temp;
  }

  int power(string A)
  {
    int size = A.size();

    //if the string size is "1", to qualify as a power of 2,
    //the number should be a "2" or "4" or "8"
    if(size==1)
    {
      if(A[0]=='2' || A[0]=='4' || A[0] == '8')
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      while(Not_one(A) && is_Even(A))
      {
        A = Divide(A,2);

        if(A.size()==1 && A[0]=='1')
        {
          break;
        }
      }

      if(Not_one(A))
      {
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
};

int main()
{
  Solution s;

  string A = "128";

  int k = s.power(A);

  cout<<k;

  return 0;
}
