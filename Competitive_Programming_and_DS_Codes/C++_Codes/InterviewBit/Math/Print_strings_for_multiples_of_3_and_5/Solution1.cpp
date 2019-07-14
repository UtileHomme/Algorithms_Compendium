// https://www.interviewbit.com/problems/fizzbuzz/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
  vector <string> fizBuzz(int A)
  {
    vector <string> s;

    for(int i=1; i<=A; i++)
    {
      if(i%3==0 && i%5!=0)
      {
        s.push_back("Fizz");
      }
      else if(i%5==0 && i%3!=0)
      {
        s.push_back("Buzz");
      }
      else if(i%15==0)
      {
        s.push_back("FizzBuzz");
      }
      else
      {
        string k = to_string(i);
        s.push_back(k);
      }
    }

    return s;
  }
};

int main()
{
  Solution s;

  vector <string> k = s.fizBuzz(30);

  for(auto i:k)
  {
    cout<<i<<" ";
  }
  return 0;
}

/*

Time Complexity = O(N)

Space Compl = O(1)

*/
