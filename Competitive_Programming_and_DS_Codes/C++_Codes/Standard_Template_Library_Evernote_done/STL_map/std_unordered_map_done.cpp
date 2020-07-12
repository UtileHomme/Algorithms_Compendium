// https://www.geeksforgeeks.org/?p=164838

#include <iostream>
#include <unordered_map>
#include <iterator>
#include<vector>

using namespace std;

int main()
{

  unordered_map<int, int> order;

  order[5] = 10;
  order[3] = 5;
  order[20] = 100;
  order[1] = 1;

  for(auto i=order.begin(); i!=order.end();i++)
  {
    cout<<i->first<<" "<<i->second<<endl;
  }

  return 0;
}
