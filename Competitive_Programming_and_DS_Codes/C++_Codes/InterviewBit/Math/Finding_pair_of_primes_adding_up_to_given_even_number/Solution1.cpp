// https://www.interviewbit.com/problems/prime-sum/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <int> primesum(int A)
  {
      vector <int> K;

      vector <bool> Prime(A+1, 1);

      Prime[0]=0;
      Prime[1]=0;

      for(int i=2;i<=A;i++)
      {
        if(Prime[i]==1)
        {
          for(int j=2;(i*j)<=A;j++)
          {
            Prime[i*j]=0;
          }
        }
      }

      vector <int> B;

      for(int i=2;i<=A;i++)
      {
        if(Prime[i] && Prime[A-i])
        {
          B.push_back(i);
          B.push_back(A-i);
          break;
        }
      }

      return B;
  }
};

int main()
{
  vector <int> B;

  int A =12;

  Solution s;

  B = s.primesum(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }
}
