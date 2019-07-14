<!-- What are Asymptotic Notations -->

We want to find Time Complexity irrespective of the Model Machine
and for very large input sizes.
Therefore we can ignore the constant and lower terms (Because of n -> infinity)
We try to analyse for worst case scenarios

<!-- Example - -->

T(n) = 5n^2 + 7
T(n) = 17(n^2) + 6n + 8

Both have Time Complexity = O(n^2)

<!-- What is "Big O" in general -->
- it is the language and metric we use to describe the efficiency of algorithms

<!-- Types of Asymptotic Notations -->

1. Big O notation (Upper Bound - Worst Case)

Eg - This is similar to the "Less than or Equal to relationship"
- If Bob is "X" years old (assuming no one lives past 130 years), then we could say X<=130
- it would also be correct to say that X<=1000 or <=10000000.

<!-- Representation -->
O(g(n)) = {f{n}: there exists constants 'c' and 'n0' where
f(n) <= cg(n) for n>=n0
}

<!-- Pictorial Representation -->



<!-- Example -  -->
f(n) = 5n^2 + 2n + 1
g(n) = n^2

Let n = 1 , f(n) = 8
g(n) = 1
Therefore for n0 = 1 and c=8 we have the above true

<!-- Example -->

f(n) = 3n+2
g(n) = n

Let n =2 , c = 4 then
f(n) = 8
g(n) = 8

For all values of n >= 2, this holds true

We could also go for g(n) = n^2 , n^n etc. but we are looking for the tightest bound

<!-- What it means -->
f(n) never grows at a faster rate then cg(n) after n0

f(n) is bounded by g(n) for upper side therefore upper bound

2. Omega Notation (Lower Bound - Best Case)

<!-- Representation -->
Omega(g(n)) = {f{n}: there exists constants 'c' and 'n0' where
f(n) >= cg(n) for n>=n0
}

<!-- Pictorial Representation -->
http://imgur.com/a/DTXs3

<!-- Example -  -->
f(n) = 5n^2 + 2n + 1
g(n) = n^2

Let n = 0 , f(n) = 1
g(n) = 0
Therefore for n0 = 0 and c=5 we have the above true

<!-- Example -->

f(n) = 3n+2
g(n) = n

Let n =1 , c = 1 then
f(n) = 5
g(n) = 1

Therefore for n0 = 1, c =1 , this holds true

<!-- What it means -->
cg(n) will never exceed f(n) for n>=n0

3. Theta notation

<!-- Representation -->
0(g(n)) = {f{n}: there exists constants 'c1' and'c2' and 'n0' where
c1g(n)<=f(n)<=c2g(n) for n>=n0

<!-- Example -  -->
f(n) = 5n^2 + 2n + 1
g(n) = n^2

Let n = 1 , f(n) = 8
g(n) = 1
Therefore for n0 = 1 and c1=5 and c2=8 we have the above true

<!-- Pictorial Representation -->
http://imgur.com/a/9K2q5

<!-- What it means -->
It gives a tight bound

<!-- What are Worst, Average and Best Cases -->
<!-- Reference - https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/ -->

1. In the Worst case, we calculate the upper bound on running time of the algo.
  - we must know the case that causes the maximum number of operations to be executed
  - mostly done.

* For Linear Search, this happens when element to be searched is not present in the array , therefore, O(n)

2. In the Average case, we take all the possible inputs and calculate the computing time for all the inputs.
  - Sum all the calculated values and divide the sum by the total number of inputs
  - Sometimes, done

3. In the Best case, we calculate the lower bound on running time of the algo.
  - we must know the case that causes the minimum number of operations to be executed
  - hardly done.

* For Linear Search, best case occurs when the number is available at the first location
  - The number of operations in the best case would be O(1)

**** NOTE *****
For Some algorithms, all the cases are asymptotically same, i.e., there is no worst and best case

Eg- Merge Sort does O(nLogn) operations in all cases

In Quick sort, worst case occurs when the input array is already sorted
- the best case occurs when pivot elements divide array in two halves

In Insertion sort, the worst case occurs when the array is reverse sorted
- the best case occurs, when the array is sorted in the same order as the output

<!-- What is Big-O notation -->
- it measures how well an operation will scale when we increase the amount of things it operates on
** it doesn't mean that O(n) is always better than O(n^2)

<!-- Comparison of different Big-O notations with increase in size of operation -->

https://imgur.com/a/wpgP2

<!-- What can be said about O(logn) operations -->
- O(log n) operations run in logarithmic time - the operation will take longer as the input size increases, but once the input gets fairly large it won’t change enough to worry about.
- If you double "n", you have to spend an extra amount of time "t" to complete the task.
- If "n" doubles again, "t" won’t double, but will increase by a constant amount.

<!-- What can be said about O(n) operations -->
- It means that for every element, you are doing a constant number of operations, such as comparing each element to a known value.

- O(n) operations run in linear time - the larger the input, the longer it takes, in an even tradeoff.
- Every time you double n, the operation will take twice as long.

<!-- What can be said about O(nlogn) operations -->

- O(n log n) means that you’re performing an O(log n) operation for each item in your input.
- Most (efficient) sort algorithms are an example of this.

- O(n log n) operations run in loglinear time - increasing the input size hurts, but may still be manageable.
- Every time you double n, you spend twice as much time plus a little more.

<!-- What can be said about O(n^2) operations -->

- O(n2) means that for every element, you do something with every other element, such as comparing them.

- O(n2) operations run in quadratic time - the operation is only really practical up to a certain input size.
- Every time "n" doubles, the operation takes four times as long.

<!-- What is amortized analysis -->

- if we do an operation say a million times, we don't really care about the worst case or the best case of that operation - what we care about is how much time is taken in total when
we repeat the operation a million times

- So, it doesn't matter if the operation is very slow once in a while, as long as "once in a while" is rare enough for the slowness to be diluted away
- amortized time means the average time taken per operation, if you do many operations
