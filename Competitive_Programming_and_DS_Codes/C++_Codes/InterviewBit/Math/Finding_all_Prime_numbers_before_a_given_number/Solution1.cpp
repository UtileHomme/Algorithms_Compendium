// https://www.interviewbit.com/problems/prime-numbers/


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
  vector<int> sieve(int &A)
  {

    int Prime[A+1];

    vector <int> B;

    for(int i=0;i<=A;i++)
    {
      Prime[i] = 1;
      Prime[0] = 0;
      Prime[1] = 0;
    }


    for(int i=2;i<=A;i++)
    {
      int key = i;

      int j=2;
      while(j<=sqrt(i))
      {
        if(key%j==0)
        {
          Prime[i]=0;
          break;
        }
        else
        {
          Prime[i]=1;
        }

        j++;
      }
    }

    for(int i=0;i<=A;i++)
    {
      if(Prime[i]==1)
      {
        B.push_back(i);
      }
    }


    return B;
  }

};

int main()
{
  vector <int> B;

  int n = 15;
  Solution s;
  B = s.sieve(n);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }

  return 0;
}

// Time Complexity = O(n * sqrt(n));
