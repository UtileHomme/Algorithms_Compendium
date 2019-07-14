// https://www.interviewbit.com/problems/power-of-2/

https://www.geeksforgeeks.org/given-huge-number-check-power-two/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  string multiplyByTwo(string A)
  {
    string ans="";

    int sum=0, carry=0;

    //take the existing temp and multiply it with 2 and convert it into a string
    for(int i=A.size()-1; i>=0; i--)
    {
      sum = (A[i]-'0')*2 + carry;
      carry = sum/10;
      sum = sum % 10;

      //convert the number into a character and attach to existing string
      ans = ans + to_string(sum);
    }

    //if some carry is left append it to the right of the existing string
    if(carry>0)
    {
      ans = ans + to_string(carry);
    }

    //reverse the string
    for(int i=0;i<ans.size()/2; i++)
    {
      char c = ans[i];
      ans[i] = ans[ans.size()-i-1];
      ans[ans.size()-i-1] = c;
    }

    return ans;
  }

  bool compareString(string temp, string num)
  {
    if(temp.size() == num.size())
    {
      return temp<num;
    }

    else if(temp.size()<num.size())
    {
      return true;
    }

    return false;
  }

  int power(string A)
  {
    int i=0;

    int len = A.size();

    //Do not consider the zeroes in the beginning of the string
    while(A[i]==0 && i<len)
    {
      i++;
    }

    //the string consisted of zeroes only
    if(i==len)
    {
      return 0;
    }

    string num = "";

    while(i!=len)
    {
      num = num + A[i];
      i++;
    }

    string temp = "2";

    //till the size of temp is less than or equal to the size of num
    while(compareString(temp, num))
    {
      //starting from 2, keep on multiplyng it with 2
      temp = multiplyByTwo(temp);
    }

    if(temp==num)
    {
      return 1;
    }

    return 0;

  }
};

int main()
{
  Solution s;

  string A = "127";

  int k = s.power(A);

  cout<<k;

  return 0;
}
