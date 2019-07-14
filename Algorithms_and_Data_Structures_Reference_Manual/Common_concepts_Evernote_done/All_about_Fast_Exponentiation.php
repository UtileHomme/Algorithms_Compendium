<!-- What is Fast Exponentiation -->
<!-- Reference - https://www.youtube.com/watch?v=-3Lt-EwR_Hw -->

a^N = B

The brute force approach is to do the following

a * a * a *a ....... N times = B
- but this takes O(n) in terms of time complexity

- A better way is to divide and conquer and solve it in parts

Part A
- a * a * a * a .... (N/2) times = R
- we compute this part and we have the answer for Part B

Part B
- a * a * a * a .... (N/2) times = R (this has already been computed above)

If N = even
- R * R

If N = odd
- take the floor of N/2
- multiply by "a"

Therefore, final result is
R * R (if N = even)
R * R * a (if N = odd)

** Instead of dividing it by 2 , we could also divide the problem by 4, 8, 16 etc.

** The base condition is
N / 2^k = 1

k = log N (base 2)

- Finding B = a^N

<!-- Code -->

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

<!-- Time complexity -->

https://imgur.com/a/BNI7F

N/2^k = 1
k = log N

Time complexity = O(log N)
