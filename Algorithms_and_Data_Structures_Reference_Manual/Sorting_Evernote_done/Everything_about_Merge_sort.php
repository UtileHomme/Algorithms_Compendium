<!-- What happens in Merge Sort -->

- It divides the input array into two halves, calls itself for the two halves and then merges the sorted 2 halves
- The 'merge' function is used for merging 2 halves

- The merge(a,l,mid,h) function is the key process that assumes that a[l....mid] and a[mid+1....h] are sorted and merges the two sorted subarrays into one

<!-- Code -->
https://ideone.com/JoYai0

<!-- How it looks -->

https://imgur.com/a/dXmc1

<!-- What kind of Algorithm Merge Sort is  -->

 1. Divide and Conquer
 - we break a problem into sub-problems
 - we first find the solution to the sub-problems
 - from there on, we find the solution to actual problems

2. Recursion
- Reducing a problem in self-similar manner

3. Stable

4. Not in-place
- it doesn't take constant amount of memory to sort a list

<!-- Space Complexity -->
Theta(n)
- the memory is proportional to the number of elements in the list

<!-- Time Complexity -->
O(nlogn)

<!-- Calculating Time Complexity -->

For Merge sort functions, time taken is T(n/2)
- because partition is taking place

- time taken for Merge is (constant) * n

T(n) = c , if n = 1
        = 2T(n/2) + cn , if n > 1

Let
T(n) = 2T(n/2) + cn

Let n = n/2

T(n/2) = 2T(n/4) + 2c(n/2)  --- (a)

T(n/4) = 2T(n/8) + c(n/4)  -- (b)

....

T(n) = 2^kT(n/2^k) + kcn --- (c)

To get T(1), n/2^k = 1
n = 2^k
k = logn(base 2)

Put this in the "c",

We have T(n) = cn + nlogn

since, "nlogn" comes more prominently than "n"
T(n) = nlogn
(both best and worst case)

<!-- How the function calls look -->

https://imgur.com/a/xmvjm

<!-- Calculating Space complexity for Merge Sort -->

1. If we are not clearing the extra memory

- The height of the partitions will be in this manner

                                                a                                                                                   n

                                        b            c                                                                             n

                                d                           e                                                                      n

b = c = n/2
d = e =n/4

This ends when n/2^k = 1
2^k = n
k = logn(base 2)

Total space used is n * logn = nlogn

2. If we are clearing the extra memory

- The height of the partitions will be in this manner

                                    a

                            b

                    c

Since after the entire left side has been partitioned and sorted , we will merge them one by one and delete the extra memory space, therefore

each level will have a particular number of elements

Level 0 - n
Level 1 - n/2
Level 2 - n/4

Taking a sum of all these = (n + n/2 + n/4 + n/8+.................)
                                         = n (1 + 1/2 + 1/4 + 1/8 + ...)
                                         = n(G.P) = 2n

Space complexity = O(n)

<!-- Applications of Merge Sort -->

1. It is useful for sorting linked lists in O(nlogn) time
- the memory allocation is different in array and linked list
- In linked list the nodes need not be adjacent in memory

- Therefore, we can insert items in the middle in O(1) extra space and O(1) time

<!-- Worst case scenario for Merge Sort -->

4 | 0 | 6 | 2 | 5 | 1 | 7 | 3

https://imgur.com/a/SnkqC

<!-- How many comparisons will it take to merge "m" elements from one array and "n" elements from another array in a particular order -->

O(m+n)

** Each level requires appending of smaller elements in the array to the temporary array and the subsequent larger elements
- each step required "n (number of elements)" of appending or comparisons
- number of steps are the number of divisions which happened during the split

For 8 elements, n = 8 and number of steps = log n = log 8(base 2)= 3

Since each step takes 8 appendages and in total there are 3 steps , total appendages = 8 *3 = 24 = n logn

<!-- Merge Sort in a nutshell -->

https://imgur.com/a/bsQ9d

https://imgur.com/a/wWptX
