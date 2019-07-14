// https://www.geeksforgeeks.org/returning-multiple-values-from-a-function-using-tuple-and-pair-in-c/

// https://ideone.com/yTdq0v

#include <bits/stdc++.h>

using namespace std;

tuple <int, int , char> foo(int n1, int n2)
{
    return make_tuple(n2, n1, 'a');
}
pair <int, int> foo1 (int num1, int num2)
{
    return make_pair(num2, num1);
}

int main()
{

    // your code goes here

    int a, b;
    char cc;

    tie(a, b, cc) = foo(5,20);

    pair <int, int> p = foo1 (5,2);

    cout<<"Values returned by tuple"<<endl;
    cout<<a<<" "<<b<<" "<<cc<<" "<<endl;

    cout<<"Values returned by pair"<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
