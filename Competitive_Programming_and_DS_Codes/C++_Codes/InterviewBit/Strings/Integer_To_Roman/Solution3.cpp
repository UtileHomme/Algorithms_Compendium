// https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

// https://www.interviewbit.com/problems/integer-to-roman/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:

  string printRoman(int A)
  {
    string ans;

    vector <string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    vector <int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for(int i=0;A!=0; i++)
    {
      while(A>=val[i])
      {
        A = A - val[i];
        ans = ans + roman[i];
      }
    }

    return ans;
  }
};

int main()
{
  int num = 2843;

  Solution s;
  string k = s.printRoman(num);

  cout<<k;

  return 0;
}
