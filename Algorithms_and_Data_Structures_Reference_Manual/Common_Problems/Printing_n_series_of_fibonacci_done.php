<!-- For Solution 1 -->

Time Complexity Analysis

- when i = 1, fib(1) requires 2^1 steps
- when i= 2, fib(2) requires 2^2 steps
- when i= 3, fib(3) requires 2^3 steps
.....
- when i = n , fib(n) requires 2^n steps

Total time complexity = 2^1 + 2^2 + 2^2 + .... + 2^n
= 2^n

<!-- For Solution 2 -->

- Since the values are already stored in an array, the time taken is O(n)

<!-- For Solution 3 -->

- Since we already have the previous value of fibonacci calls being returned, we do not need to explicitly calculate each fibonacci call
- So the number of iterations are only "N"

Time Complexity = O(n)
