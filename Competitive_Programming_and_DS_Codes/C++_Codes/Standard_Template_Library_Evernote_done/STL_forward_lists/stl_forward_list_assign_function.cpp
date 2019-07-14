// https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list <int> f1;

  forward_list <int> f2;

  // Assigning values using assign
  f1.assign({1,2,3});

  // Assigning repeating values using assign()
  // 5 elements with value 10
  f2.assign(5,10);

  cout<<"The elements of first forward list are "<<endl;
  for(int &a : f1)
  {
    cout<<a<<" ";
  }
  cout<<endl;

  cout<<"The elements of second forward list are"<<endl;
  for(int &b : f2)
  {
    cout<<b<<" ";
  }

  cout<<endl;

  return 0;
}
