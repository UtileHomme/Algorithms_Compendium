// https://www.geeksforgeeks.org/?p=28

# include <iostream>

using namespace std;

int power(int a, int N)
{
    if(N==0)
    {
        return 1;
    }
    else if(N%2==0)
    {
        return power(a, N/2) * power(a, N/2);
    }
    else
    {
      return a * power(a, N/2) * power(a, N/2);
    }
}

int main()
{
    int a = 3;
    int N = 4;

    int b = power(a,N);

    cout<<b<<endl;
    return 0;
}
