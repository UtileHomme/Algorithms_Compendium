// https://www.geeksforgeeks.org/?p=160713

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int row;
  cin>>row;


  int cols[] = {5,4,3,2,1};

  vector <vector <int>> vect(row);

  for(int i=0;i<row;i++)
  {
    int col = cols[i];

    vect[i] = vector<int>(col);
    for(int j=0;j<col;j++)
    {
      vect[i][j] = j+1;
    }
  }

  for(int i=0;i<vect.size();i++)
  {
    for(int j=0;j<vect[i].size();j++)
    {
      cout<<vect[i][j]<<" ";
    }

    cout<<endl;
  }
  return 0;
}
