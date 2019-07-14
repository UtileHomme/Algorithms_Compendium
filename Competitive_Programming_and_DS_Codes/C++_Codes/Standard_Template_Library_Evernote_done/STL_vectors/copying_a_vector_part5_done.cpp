// https://www.geeksforgeeks.org/ways-copy-vector-c/

#include <iostream>
#include <vector>
#include <boost/assign/list_of.hpp>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vect1 = boost::assign::list_of(10)(20)(30);

  vector<int> vect2;

  vect2.assign(vect1.begin(), vect1.end());


  cout<<"Old vector elements are";

  for(int i=0;i<vect1.size();i++)
  {
    cout<<vect1[i]<<" ";
  }
  cout<<endl;

  cout<<"New vector elements are";

  for(int i=0;i<vect2.size();i++)
  {
    cout<<vect2[i]<<" ";
  }

  cout<<endl;


}
