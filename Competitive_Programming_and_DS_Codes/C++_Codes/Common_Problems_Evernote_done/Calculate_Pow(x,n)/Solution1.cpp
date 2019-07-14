// https://www.geeksforgeeks.org/?p=28

# include <iostream>

using namespace std;

int power(int a, int N)
{
    if(N==0)
    {
        return 1;
    }
    else if(N==1)
    {
        return a;
    }
    else
    {
        int R = power(a, N/2);

        if(N%2==0)
        {
            return R*R;
        }
        else
        {
            return R*a*R;
        }
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
