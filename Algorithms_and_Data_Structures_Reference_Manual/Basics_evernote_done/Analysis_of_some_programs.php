<!-- Iterative programs -->

<!-- Program 1 -->

Function()
{
    int i;
    for(i=1 to n)
    {
        print("Ravi");
    }
}

- Since the above program is run "n" times, time complexity is O(n)

<!-- Program 2 -->

Function()
{
    int i;
    for(i=1 to n)
    {
        for(j=1 to n)
        {
            print("Ravi");
        }
    }
}

- Since for every iteration of "i" we are running "j" 'n' times, total iterations are "n^2"

Time complexity is O(n^2)

<!-- Program 3 -->

Function()
{
    i=1, s=1;

    while(s<=n)
    {
        i++;
        s = s+i;
        print("ravi")
    }
}

<!-- Process -->

        First iteration         Second iteration        Third iteration
s               1                           3                                  6
i               1                            2                                 3

Let's say the loop stops after "k" iterations

s = Sum of the "k (till that time)" iteration of natural numbers

s = k(k+1)/2 = (k^2 + k) /2

Now s > n, then the loop stops.

 (k^2 + k) /2 > n

 Therefore k = O(square_root(n))

<!-- Program 4  -->

Function()
{
    i = 1
    for(i = 1 ; i<= square_root(n); i++)
    {
        print("Ravi")
    }
}

Since, it will get execute square_root(n) times

Therefore, Time Complexity = O(square_root(n));

<!-- Program 5 -->

Function()
{
    int i, j , k , n ;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<100;k++)
            {
                print("Ravi")
            }
        }
    }
}

** here, "k" is independent of "i" and "j"

<!-- Process -->

Number of times each is getting executed

i = 1           |   i = 2                   |    i = 3
j = 1           |    j = 2 times        |    j = 3 times
k = 100      |   k = 200              |    k = 300

Total times this is executed  = 100 + 200 + 300 + .... n * 100
                                             = 100 * n(n+1)/2
                                             = O(n^2)

<!-- Program 6 -->

Function()
{
    int i, j , k , n ;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i^2;j++)
        {
            for(k=1;k<=n/2;k++)
            {
                print("Ravi")
            }
        }
    }
}

<!-- Process -->

"k" is dependent on "n" and not "i" and "j"

Number of times each is getting executed

i = 1           |   i = 2                   |    i = 3
j = 1           |    j = 4 times        |    j = 9 times
k = n/2 *1      |   k = n/2 *4              |    k = n/2 * 9

Total time = n/2(1+4 + 9+ ..... + n^2)
                 = n/2 [ n(n+1)(2n+1)]/6
                 = O(n^4)

<!-- Program 7 -->

Function()
{
    for(i=1;i<n;i=i*2)
    {
        print("Ravi")
    }
}

<!-- Process -->

i = 1, 2, 4, 8 ..... n

2^0, 2^1, 2^2,2^3 ..... 2^k = n

k = logn(base 2)

<!-- Program 8 -->

Function()
{
    int i,j,k;
    for(i=n/2;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            for(k=1;k<=n;k=k*2)
            {
                print("Ravi")
            }
        }
    }
}

<!-- Process -->

First loop gets executed (n/2) times
Second loop gets executed (n/2) times
Third loop gets executed (logn[base 2]) times (as discussed above)

Total Time = (n/2) * (n/2) * (logn)
                  = (n^2)/2 * logn

<!-- Program 9-->

Function()
{
    int i,j,k;
    for(i=n/2;i<=n;i++)
    {
        for(j=1;j<=n;2*j)
        {
            for(k=1;k<=n;k=k*2)
            {
                print("Ravi")
            }
        }
    }
}

<!-- Process -->

First loop runs (n/2) times
Second loop runs (logn) times
Third look runs (logn) times

Total time = (n)(logn)^2

<!-- Program 10 -->

Function()
{
    while(n>1)
    {
        n=n/2
    }
}

<!-- Process -->

When n = 2, k =1 (where k = number of times while loop is executed)
when n=2^2, k = 2 ......

Therefore, n = 2^k
k = logn(base 2)

In case of n = 20, we have k = 4.5

Therfore, k = O(floor(logn[base 2]))

<!-- Program 11 -->

Function()
{
    for(i=1;i<n;i++)
    {
        for (j=1;j<=n;j=j+i)
        {
            print("Ravi")
        }
    }
}

<!-- Process -->

i = 1                   |      i = 2                |         i = 3
j = 1 to n            |      j = 1 to n         |         j = 1 to n
                                (steps of 2)               (steps of 3)
n times               |     n/ 2                  |           n/3                     .. and so on

Total time = n (1 + 1/2 + 1/3 + .......... + 1/n)
                 = n(logn)

                 because logn = (1 + 1/2 + 1/3 + 1/4 + .......... + 1/n)

<!-- Program 12 -->

Function()
{
    int n = 2^2^k;

    for(i=1;i<=n;i++)
    {
        j=2;
        while(j<=n)
        {
            j = j^2;
            print("Ravi")
        }
    }
}

<!-- Process -->

i = 1  to n

k = 1           |       k = 2              |         k = 3
n = 4           |       n = 16            |         n = 256
j = 2, 4        |       j = 2,4, 8      |         j = 2,4,8, 16

(n * 2)        |       (n*3)               |      (n * 4)

Total time = n * (k+1)

2^k = logn(base 2)
k = log(logn)

therefore time in terms of n = n(lognlogn)

<!-- Recursive Programs -->

<!-- Overview -->

A(n)
}
if(some condition)
{
    return a(n/2) + a(n/2);
}

** constant time is takes for the "if" condition and for the addition

Let the time complexity for "A(n)" is T(n), then

T(n) = constant + 2T(n/2)

<!-- Program 1 -->

A(n)
{
    if(n>1)
    {
        return A(n-1)
    }
}

T(n) = T(n-1) + 1  --- a
        = 1 if n = 1 (anchor condition)

<!-- Methods to solve this -->

1. Back Substitution

T(n-1) = T(n-2) + 1    --b
T(n-2) = T(n-3) + 1  ---c

Putting "b" in "a"

T(n) = T(n-2) + 2  -- d

Putting "c" in "d"

T(n) = T(n-3) + 3

Therefore, if we keep this going , we have a generalized term

T(n) = T(n-k) + k  --e

To get T(1), n- k = 1

Therefore, k = n-1

Substitute, this in "e"

T(n) = T(1) + (n-1)

Since T(1) = 1 if n = 1(anchor condition), therefore
T(n) = n

Therefore, time complexity is O(n)

<!-- Program Example 2 -->

T(n) = T(n-1) + n , n>1   --a
        = 1 , n = 1

Put n - 1, in place of n

T(n-1) = T(n-2) + n-1  --b
T(n-2) = T(n-3) + n-2  --c

T(n) = n + (n-1) + (n-2) ..... _ T(n-k) + T(n-(k+1))

To get T(1), put n -( k+1 ) = 1
Therefore, k = n-2

T(n) = n + (n-1) + (n-2) + (n - (n-2)) + T(b - (n-2+1))

T(n) = n + (n-1) + (n-2) .... + 2 + 1

        = n(n+1)/2

Therefore, time complexity = O(n^2)

2. Recursion tree

<!-- Example 1 -->

T(n) = 2T( n/2) + C, n>1
        = C , n = 1

Recursion tree looks like : https://imgur.com/a/QHtye

Time complexity = O(n)

<!-- Example 2 -->

T(n) = 2T(n/2) + n ; n>1
        = 1 ; n=1

Recursion tree looks like : https://imgur.com/a/33nAb

Time complexity - O(nlogn)

<!-- Recursive runtimes -->

int f(int n)
{
    if (n<=1)
    {
        return 1;
    }

    return f(n-1) + f(n-1);
}

<!-- How to visualize these calls -->
https://imgur.com/a/0MBTH

** The tree will have a depth of "n" where n=user input
- Each node has two children
- Each level will have twice as many calls as the one above it

<!-- Tabular representation of above -->
https://imgur.com/a/GAlaR

The total nodes = 2^0 + 2^1 + 2^2 + 2^3 + ..... + 2^N
- Since it is a G.P. with "n+1" terms, sum is (2^(n+1) - 1)

Time Complexity = O(2^n)

*** When we have a recursive function that makes multiple calls, the runtime will often (but not always) look like O(branches^depth)
- where branches is the number of times each recursive call branches

** The base of "logs" doesn't matter for "big O" since logs of different bases are only different by a constant factor
- However, the base of an exponent does matter

Eg -
Compare 2^n and 8^n
- we get 2^n and 2^(3n)
- These are different by a factor of 2^(2n)

<!-- More Time Complexity Problems -->

Eg-

void foo(int a[])
{
    int sum = 0;
    int product = 1;

    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }

    for(int i=0;i<a.length;i++)
    {
        product *= a[i];
    }

    cout <<sum<<" , "<<product;
}

- Since we iterate through the array completely once, the time complexity is T(n) = O(n)

Eg -

void printPairs(int a[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i]<<" , "<<a[j];
        }
    }
}

- For each iteration of "i", "j" is run "n" times

- Therefore, the time complexity is T(n) = O(n^2)

Eg -

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        cout<<a[i]<<" "<<a[j]<<endl;
    }
}

- For each iteration of "i", "j" is running "n-i-1" times

- Therefore, the time complexity is T(n) = O(n^2)

Eg -

for(int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" "<<b[j]<<endl;
        }
    }
}

- For each iteration of "i", we check the condition for all iterations of "j"

- Therefore, the time complexity is T(n) = O(n1*n2)

Eg -

for(int i=0;i<n1;i++)
{
    for (int j=0;j<n2;j++)
    {
        for(int k=0;k<100000;k++)
        {
            cout<<a[i]<<" "<<b[j]<<endl;
        }
    }
}

Time Complexity is still = O(n1*n2)

Eg -

for(int i=0;i<len/2;i++)
{
    int start = 0;
    int end = len-i-1;

    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
}

- Even though the number of iterations are only half of the length of the array, the time complexity is still O(n)

<!-- Time Complexity of Different expressions -->

1. O(N+P) where P< N/2
= O(N)

2. O(2N)
= O(N)

3. O(N + log N)
= O(N) because we can drop the log N term

4. O(N + M)
- since we do not know the relationship between "N" and "M", we have to retain both of them

Eg -

Assume we have an array of strings, we sort each string, and we sort the entire array of strings

0 ja
1 mlk
2 ijc
3 dfb

- Let "s" be the length of the longest string
- Let "a" be the length of the array

- Sorting of each string takes O(s * log s) time
- This has to be done for all "a" strings therefore O(a * s * log s)

By now the list looks like

0 aj
1 klm
2 cij
3 bdf

Now we also have to sort the complete array alphabetically. For this each string needs to be compared

- The comparison of each string with the other takes O(s) time and the sorting of such "a" strings takes O(a log a)
- Therefore total time complexity is O(s * a log a)

Combining the above to results we have
O(a * s (log a + log s))

Eg -

bool PrimeCheck(int n)
{
    for(int i=0;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

Time Complexity = O(sqrt(n))
