// https://www.geeksforgeeks.org/sorting-2d-vector-in-c-set-1-by-row-and-column/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector <vector <int>> vect {{3,5,1}, {4,8,6},{7,2,9}};

  int m=vect.size();

  int n = vect[0].size();

  cout<<"The matrix before sorting 1st row is: "<<endl;

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<vect[i][j]<<" ";
    }

    cout<<endl;
  }

  sort(vect[0].begin(), vect[0].end());


    cout<<"The matrix after sorting 1st row is: "<<endl;

    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<vect[i][j]<<" ";
      }

      cout<<endl;
    }

  return 0;
}
