// CCI Eg 10 (page 32)

#include <iostream>
#include <math.h>

using namespace std;

bool PrimeCheck(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}


int main()
{

    int n = 1;

    int k = PrimeCheck(n);
    if(k==false)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is a composite number";
    }
}

// Time Complexity = O(sqrt(n))
