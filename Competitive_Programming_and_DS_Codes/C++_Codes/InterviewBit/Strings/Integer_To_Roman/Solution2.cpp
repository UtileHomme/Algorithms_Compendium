// https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

// https://www.interviewbit.com/problems/integer-to-roman/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:

  string printRoman(int num)
  {
    //from index 0 - 3
    string m[] = {"", "M", "MM", "MMM"};

    //from index 0 - 9
    string c[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    //from index 0 - 9
    string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

    //from index 0 - 9
    string i[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    //take out the thousand index and print the corresponding string from above
    string thousands = m[num/1000];

    string hundreds = c[(num%1000)/100];

    string tens = x[(num%100)/10];

    string ones = i[num%10];

    string ans = thousands + hundreds + tens + ones;

    return ans;
  }
};

int main()
{
  int num = 1234;

  Solution s;
  string k = s.printRoman(num);

  cout<<k;

  return 0;
}
