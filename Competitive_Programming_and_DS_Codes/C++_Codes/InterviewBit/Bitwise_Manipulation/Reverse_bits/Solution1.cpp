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
        unsigned int noOfBits = sizeof(A) * 8;

        unsigned int reverse_num = 0; 

        int i; 

        for(i=0; i<noOfBits;i++)
        {
            //if that particular bit is set
            if(A & (1<<i))
            {
                //update 31 - i bit position with 1
                reverse_num = reverse_num | (1 << (noOfBits - 1 - i));
            }
        }

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