// https://www.geeksforgeeks.org/?p=11337

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int search(vector <vector<int>> &A, int key)
  {
    int i =0, j=A.size()-1;

    while(i<A.size() && j>=0)
    {
      if(A[i][j]==key)
      {
        cout<<i<<" "<<j<<endl;
        return 1;
      }

      // Move to the left
      if(A[i][j]>key)
      {
        j--;
      }
      // Move to the bottom
      else
      {
        i++;
      }
    }

    //if (i==n || j==-1)
    cout<<"Element not found";
    return 0;
  }

};

int main()
{
  vector <vector <int>> A = {{10, 20, 30, 40},
  {15, 25, 35, 45},
  {27, 29, 37, 48},
  {32, 33, 39, 50}};

  Solution s;

  int k = 27;

  s.search(A, k);
}
