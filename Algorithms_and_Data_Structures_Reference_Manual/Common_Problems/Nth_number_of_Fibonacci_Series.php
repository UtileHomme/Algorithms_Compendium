NOTE : The "n" value mentioned in the fibonacci series has "n+1" numbers
- the numbering is assumed to start from "0"

<!-- For Solution 1 -->

<!-- Time Complexity -->

The recusion Relation looks like
T(n) = T(n-1) + T(n-2)

The recursion tree looks like
https://imgur.com/a/jd7V0

- The first level has number of calls equal to 2^1
- The second level has number of calls equal to 2^2
and so on
- The nth level will have number of calls equal to 2^n

- Summing all the above , we have
2^1 + 2^2 + 2^3 + .... + 2^n = (2^n) - 1 = 2^n

- Therefore , the time Complexity is 2^n

<!-- Space Complexity -->
O(n) if full call stack size is taken in consideration else O(1)

<!-- For Solution 2 -->

- We make an array of "n+1" size
- We store "0" and "1" as the first two elements of the array

- We then run a loop from "i" =2 to the "nth" element and for each iteration we keep on adding the previous two elements
- in the end , we return the "last" element of the array

<!-- Time Complexity -->
- Since the array size is "n" and we are iterating till "n", the time Complexity is O(n)

<!-- Space Complexity -->
- We have created an array of size "n" , therefore, O(n)

<!-- For Solution 3 (Space Optimized) -->

- Unlike above, we won't be creating an array now
- since, we only need to print the "nth" number, we need the first two numbers only
- we can use these by iterating and consequently calculating the next digit

<!-- Time Complexity -->
- Since the array size is "n" and we are iterating till "n", the time Complexity is O(n)

<!-- Space Complexity -->
O(1)

<!-- For Solution 4 (Matrix representation) -->

<!-- Reference - https://www.youtube.com/watch?v=EEb6JP3NXBI -->

The expression looks as follows:

f(n) = f(n-1) + f(n-2)
f(n-1) = f(n-2) + f(n-3)

We can also visualize this as a sum of products

f(n) = a * f(n-1) + a * f(n-2)

where a = 1

In matrix representation it looks as follows:
https://imgur.com/a/dt9UB

- we notice, that all the f(k) forms can be represented in the form of base conditions , i.e. , f(0) = 0 and f(1) = 1

- but we can't go on calculating like this because it will still be executed in "O(n)" time.
- we have better algorithms for the same time Complexity

- we take the first matrix of the form 2*2 as follows:
https://imgur.com/a/f5CvD

https://imgur.com/a/4mcSi

We can generalize it as follows:

https://imgur.com/a/rlnEF

- To solve the repetitive multiplication of the same matrix, we use binary exponentiation
- this means that we convert the term "n-1" in the form of powers of 2, store the matrix multiplied to itself to the that particular power in an index in the array
- and finally calculate the product of the resulting matrices

Eg -
Let "n-1" = 13
we can represent 13 as powers of 2 as : 2^3 + 2^2 + 2^0 (Note the missing term 2^1)

Binary form of 13 = 1101 (which explains the above)

So, we calculate the (matrix)^above_powers one by one and store them at the index in the array
- we simply caculate the product of these results  and multiply that result by the base conditions

https://imgur.com/a/qt3Es

- This is done in O(log n) time because (n-1) is divided by "2" till we reach 1
- this takes "log n" operations

Eg-
log 13 (Base 2) = 3
- this means that we need to divide 13 into "3" powers of 2 to achieve it
