#include <iostream>
#include <vector>

using namespace std;

void spiralMatrix(vector <vector <int>> &A)
{

  int left = 0, top=0;
  int bottom = A.size()-1;
  int right = A[0].size()-1;
  int dir = 0;

  while(top<=bottom && left<=right)
  {
    if(dir==0)
    {
      for(int i=left;i<=right;i++)
      {
        cout<<A[top][i]<<" ";
      }
      top++;
      dir=1;
    }
    else if(dir==1)
    {
      for(int i=top;i<=bottom;i++)
      {
        cout<<A[i][right]<<" ";
      }

      right--;
      dir=2;
    }
    else if(dir==2)
    {
      for(int i=right;i>=left;i--)
      {
        cout<<A[bottom][i]<<" ";
        bottom--;
        dir=3;
      }
    }

    else if(dir==3)
    {
      for(int i=bottom;i>=top;i--)
      {
        cout<<A[i][left]<<" ";
        left++;
        dir=1;
      }
    }

  }
}

int main()
{
  vector <vector <int>> A {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

  spiralMatrix(A);

  return 0;

}

// Time Complexity = O(bottom * right)
