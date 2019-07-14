// http://www.geeksforgeeks.org/linear-search/

#include<iostream>

using namespace std;
#define MAX 1111

int lsearch(int a[],int n,int x)
{
  int i;
  for(i=0;i<n;i++)
  {
    //if found
    if(a[i]==x)
    {
      return i+1;
    }
  }
  return -1;
}

int main()
{
  int n,x,a[MAX],pos;

  //enter the size of the array
  cout<<"Enter the size of the array"<<endl;
  cin>>n;

  //enter the element you wish to search
  cout<<"Enter the element you wish to search"<<endl;
  cin>>x;

  //Enter the array
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  pos = lsearch(a,n,x);

  if(pos==-1)
  {
    cout<<"Element not found";
  }
  else
  {
    cout<<"Element found at position "<<pos;
  }
}

// Time Complexity = O(n)

/*

Linear search involves comparing the element to be found with the each element
of an array

When the element is found , set flag = true else set flag=false
Depending on the value of flag in the end print the Message

<!-- Time Complexity -->

O(n) - because we are traversing all the elements in the worst case(i.e. when the element is in the end)

- Best case occurs when the element is found at the first position itself
Omega(1)

- Average case occurs when the element is found in the middle
Theta(n/2) = Theta(n)


*/
