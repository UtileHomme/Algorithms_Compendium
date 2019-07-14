// https://ideone.com/Lke228

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1111

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    long long int a[MAX];
    long long int sum=0;
    //enter the size
    cin>>size;

    //enter the array
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<size;i++)
    {
        sum = sum + a[i];
    }

    cout<<sum;

    return 0;
}
