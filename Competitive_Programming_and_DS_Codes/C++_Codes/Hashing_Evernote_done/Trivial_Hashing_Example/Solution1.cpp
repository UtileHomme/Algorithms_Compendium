// https://www.geeksforgeeks.org/index-mapping-or-trivial-hashing-with-negatives-allowed/


#include <iostream>
#include <stdlib.h>


#define MAX 78

using namespace std;

bool has[MAX+1][2];

void insert(int a[], int n)
{

    for(int i=0;i<n;i++)
    {
      //if the element is more than 0 (positive), assign has[X][0] as 1
        if(a[i]>=0)
        {
            has[a[i]][0] = 1;
        }

        // else assign has[X][1] as 1
        else
        {
            has[abs(a[i])][1] = 1;
        }
    }

    cout<<"Matrix looks like "<<endl;
    for(int i=0;i<MAX;i++)
    {
      for(int j=0;j<2;j++)
      {
        cout<<"Matrix for "<<i<<" and "<<j<<" element is "<<has[i][j]<<" ";
        cout<<endl;
      }
      cout<<endl;
    }
}

bool search(int key)
{
    if(key>=0)
    {
        if(has[key][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(has[abs(key)][1]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}



int main()
{
    int a[] = {7,4,8,-33,77,54};

    int n = sizeof(a)/sizeof(a[0]);

    insert(a,n);


    int k = -33;



    if(search(k)==true)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}
