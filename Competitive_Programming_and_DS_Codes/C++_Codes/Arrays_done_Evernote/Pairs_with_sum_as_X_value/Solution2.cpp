// https://www.geeksforgeeks.org/?p=484

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    void printPairSum(vector <int> &A, int k)
    {
      int i, temp;
      unordered_set <int> s;

      for(i=0;i<A.size();i++)
      {
        temp = k - A[i];

        if(s.find(temp)!=s.end())
        {
          cout<<A[i]<<" "<<temp<<endl;
        }
        else
        {
          s.insert(A[i]);
        }

      }
    }
};

int main()
{
  vector <int> A = {1, 4, 45, -6, 10, -8, -1};

  int k = -7;

  Solution s;
  s.printPairSum(A, k);

  return 0;
}
