// https://www.geeksforgeeks.org/?p=28

// For negative powers

# include <iostream>

using namespace std;

float power(int a, int N)
{
    if(N==0)
    {
        return 1;
    }
    float temp = power(a, N/2);

    if(N%2==0)
    {
      return temp * temp;
    }
    else
    {
      if(N>0)
      {
        return a * temp * temp;
      }
      else
      {
        return (temp * temp)/a;
      }
    }

}

int main()
{
    int a = 3;
    int N = -4;

    float b = power(a,N);

    cout<<b<<endl;
    return 0;
}
