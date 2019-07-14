// https: //www.interviewbit.com/problems/reverse-bits/

// https: //www.geeksforgeeks.org/write-an-efficient-c-program-to-reverse-bits-of-a-number/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution 
{
    public:
    unsigned int reverse(unsigned int A)
    {
       unsigned int cnt = sizeof(A)*8-1;
       unsigned int reverse_num = A; 

       //shift A by 1 bit to the right 
       A = A >> 1;

       while(A)
       {
           //shift reverse num by 1 bit to the left
           reverse_num = reverse_num<<1;
           reverse_num = reverse_num | (A&1);

           //shift the number by 1 bit to the right
           A = A>>1;
           cnt--;
       }

       reverse_num = reverse_num<<cnt;
       return reverse_num;

    }
};

int main()
{
    Solution s; 

    unsigned int A = 1; 
    unsigned int k = s.reverse(A);

    cout<<k;

    return 0;
}