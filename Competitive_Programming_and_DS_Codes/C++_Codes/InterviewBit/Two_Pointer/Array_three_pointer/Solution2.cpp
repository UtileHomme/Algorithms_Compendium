// https://www.interviewbit.com/problems/array-3-pointers/

// https://www.geeksforgeeks.org/find-three-closest-elements-from-given-three-sorted-arrays/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int minimize(const vector<int> &A, const vector <int> &B, const vector <int> &C)
  {
    int diff = INT_MAX;


        int p = A.size();
        int q = B.size();
        int r = C.size();

        int i=0, j=0, k=0;

        while(i<p && j<q && k<r)
        {
            int minimum = min(A[i], min(B[j], C[k]));
            int maximum = max(A[i], max(B[j], C[k]));

            diff = min(diff, maximum - minimum);

            if(diff==0)
            {
                break;
            }

            if(A[i]==minimum)
            {
                i++;
            }
            else if(B[j]==minimum)
            {
                j++;
            }
            else
            {
                k++;
            }
        }

        return diff;
  }
};


int main()
{
  Solution s;

  vector <int> A = {1,4,10};
  vector <int> B = {2,15,20};
  vector <int> C = {10,12};

  int k = s.minimize(A, B, C);

  cout<<k;

}
