// https://www.interviewbit.com/problems/excel-column-number/

#include <iostream>

using namespace std;

class Solution
{
public:
  int titleToNumber(string A)
  {
    int result = 0 ;
    for(auto c : A)
    {
      result = result * 26;
      result = result + (c - 'A') + 1;
    }

    return result;
  }
};

int main()
{
  Solution s;

  string A = "ABB";
  int k = s.titleToNumber(A);

  cout<<k;
}
