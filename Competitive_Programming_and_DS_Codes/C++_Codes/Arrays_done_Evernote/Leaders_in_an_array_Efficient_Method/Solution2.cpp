// http://www.geeksforgeeks.org/leaders-in-an-array/

// https://ideone.com/eSypyx

#include <iostream>

using namespace std;

void printLeaders(int a[],int  n)
{
   //Traverse from beginning to the end of the array
   for(int i = 0;i<n;i++)
   {
       //Defining the variable here, so that it can be used later outside it's own scope
       int j;

       //start from the element next to the current element from the first loop
       for(j=i+1;j<n;j++)
       {
           //if the current element is less than any element to its right, it cannot be a LEADER, therefore break the loop
           if(a[i]<=a[j])
           {
               break;
           }
       }
       //if we have reached the end of the array in the second loop without breaking out of it, the current element is a "LEADER"
       if(j==n)
       {
           cout<<"One of the Leaders is "<<a[i]<<endl;
       }
   }
}

int main()
{
   int a[] = {16, 17, 4, 3, 5, 2};
   int n = sizeof(a)/sizeof(a[0]);

   printLeaders(a,n);

   return 0;
}
