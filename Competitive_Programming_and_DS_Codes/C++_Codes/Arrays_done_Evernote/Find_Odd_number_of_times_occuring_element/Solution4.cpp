// http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

//Hashing Method

#include <map>
#include <iostream>
#include <iterator>

using namespace std;

int getOddOccurrence(int a[], int n)
{

  map <int, int> m1;

  map <int, int>::iterator i1;

  for(int i=0;i<n;i++)
  {
    if(m1.find(a[i])!=m1.end())
    {
      int freq = m1.find(a[i])->second;
      i1 = m1.find(a[i]);
      i1->second = freq + 1;
    }
    else
    {
      m1.insert(pair <int, int> (a[i], 1));
    }
  }


  for(i1 = m1.begin(); i1!=m1.end(); i1++)
  {
    if((i1->second)%2!=0)
    {
      return i1->first;
    }
  }


  return -1;
}

int main()
{
  int a[] = {2,5,3,4,3,5,5,2,4};

  int len = sizeof(a)/sizeof(a[0]);

  int val = getOddOccurrence(a, len);

  cout<<val<<endl;
  return 0;
}
