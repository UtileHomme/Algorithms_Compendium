// http://www.geeksforgeeks.org/linear-search/


// https://ideone.com/q7e3VS

#include <iostream>

using namespace std;

int main()
{
  int size,a[10],i,x,pos;
  cout<<"enter the size of the array"<<endl;
  cin>>size;

  int flag = 0;

  cout<<"enter the number that you wish to search";
  cin>>x;

  cout<<"enter the array"<<endl;
  for(i=0;i<size;i++)
  {
    cin >> a[i];
    cout<<endl;
  }


  cout<<"show the aray"<<endl;
  for(i=0;i<size;i++)
  {
    cout<<a[i]<<endl;
  }

  for(i=0;i<size;i++)
  {
    if(x==a[i])
    {
      flag = 1;
      pos = i+1;
      break;
    }
  }

  if(flag==1)
  {
    cout<<"Number found at position "<<pos;
  }
  else
  {
    cout<<"Number not found";
  }

  return 0;
}

// Time complexity = O(n)

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
