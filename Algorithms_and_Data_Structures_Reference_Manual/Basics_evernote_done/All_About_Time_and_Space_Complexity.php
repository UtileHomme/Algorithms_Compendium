<!-- What is Time Complexity -->
<!-- Reference - https://www.youtube.com/watch?v=V42FBiohc6c&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn -->

Time Complexity is the simple measurement of how fast the time taken by the algo
grows if the input size increases.

<!-- Example -  -->

Ram and Shyam have been asked to find whether a number is a prime number
Both have come up with different methods

Ram's method: Divide the number by i(= 2 to n-1)
if a number divides 'n' , 'n' is not a prime number

Shyam's method: Divide the number by i(=2 to square_root(n))
if a number divides 'n' , 'n' is not a prime number

In the worst case, Ram's method will perform the division (n-2) times
In the worst case, Shyam's method will perform the division (square_root(n)-1) times

Value      Ram's Time      Shyam's Time
n = 11       9 ms              2 ms
n=  101     99 ms              9 ms
n = 10^6    16.66 min          10^3 ms (1 sec)

Time Complexity of Ram's Program = O(n) -> Big-O
Time Complexity of Shyam's Program = O(square_root(n)) -> Big-O
Ram is taken much more time than Shyam.

<!-- What factors does Running time depend on -->
<!-- Reference - https://www.youtube.com/watch?v=8syQKTdgdzc&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn&index=2 -->

1. Single vs Multi Processor
2. Read and Write Speed to Memory
3. Type of Architecture : 32 bit / 64 bit
4. What kind of input we are giving to our program

When we talking about Time Complexity, we do not consider the above factors
- we are interested in the rate of growth of time w.r.t to input

<!-- Example - -->

1.
sum(a,b)
{
  return a+b;   //one unit of time for return statement and one unit of time for inputs and addition
}

<!-- irrespective of the inputs , time taken is constant -->
T(sum) = 2

2.

SumofList(array,size_of_array)                       COST           No. of Times
{
  1.  total=0;                                          1 (C1)               1
  2.  for i=0 to n-1                                    2 (C2)                n+1
  {
    3.    total = total + array[i]                        2 (C3)                 n
  }
  4.    return total                                    1                  1
}

1. This is only assignment therefore one unit and executed only 1 time
2. Assume total cost to be 2 units for the loop. 'n+1' for the false condition when it exits the loop

T(sumoflist) = C1 + C2(n+1) + C3(n) + 1
=  Cn + C`

Therefore time complexity will be of the form O(n)

T(sumofMatrix) will be of the form:
an^2 + bn + c    O(n^2)

The rate of growth for the quadratic will be much more than the linear and constant sum FOR VERY LARGE INPUTS

<!-- Some rules for Time Complexity Analysis -->

Running Time = Sum of (Running time of all fragments)

<!-- Example  -->

<!-- Fragment 1 -->

int a;
a=5;
a++;

Time Complexity = O(1)

<!-- Fragment 2 = Simple Loop -->

for(i=0;i<n;i++)
{
  <!-- //simple statements -->
}

Time Complexity = O(n)

<!-- Fragment 3 = Nested Loop -->

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    <!-- //simple statements -->
  }
}

Time Complexity = O(n^2)

<!-- Example -->

Function()
{
  if(condition)
  {
    for(i=0;i<n;i++)                  // Time Complexity = O(n)
    {
      <!-- //simple statements -->
    }
  }
  else
  {
    for(i=0;i<n;i++)                //  Time Complexity =  O(n^2)
    {
      for(j=0;j<n;j++)
      {
        <!-- //simple statements -->
      }
    }
  }
}

Since we try to analyse in the worst case and 'else' is the worst case therefore
Time complexity = O(n^2)

In Conditional statements, we do not add the TC's but we find the worst case

<!-- Time Complexity in Different Scenarios -->
<!-- Reference - https://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/ -->

a. O(1)

- if a function or set of statements doesn't contain a loop, recursion and call to any other non-constant function.

Eg - swap() function has O(1) time Complexity

- Also, a loop or recursion that runs a constant number of times is considered as O(1).

Eg - for(int i=1; i<=c;i++)
{
  <!-- some O(1) expression -->
}

b. O(n)

- If a loop variable is incremented/decremented by a constant amount.

Eg - for(int i=1;i<=n;i+=c)
{
  <!-- some O(1) expression -->
}

c. O(n^c)

- this is true for nested loops
- depends on the number of times the innermost statement is executed.

Eg - for(int i=1;i<=n;i+=c)
{
  for(int j=1; j<=n;j+=c)
  {
    <!-- some O(1) expression -->
  }
}

* Insertion and Selection Sort have O(n^2) time complexity

d. O(Logn)

- here, the loop variables are divided/multiplied by a constant amount

Eg - for(int i=1; i<=n; i*=c)
      {
        <!-- some O(1) expression -->
      }

* Binary search has O(Logn) time complexity

e. O(LogLogn)

- here, the loop variables are reduced/increased exponentially by a constant amount

Eg - for(int i=2;i<=n; i=pow(i,c))
    {
      <!-- Some O(1) expression -->
    }

<!-- What does O(1) mean in Time Complexity -->

- It means that it takes constant amount of time, like 14 nanoseconds or 3 minutes no matter the amount of data in the set

<!-- What does O(n) mean in Time Complexity -->
- it means it takes an amount linear with the size of the set, so a set twice the size will take twice the time

<!-- What does O(n^2) mean in Time Complexity -->

- it means that for every element we are doing something with every other element, such as comparing them
Eg - Bubble sort

<!-- What does O(nLogn) mean in Time Complexity -->

- it means that for every element, we are doing something that only needs to look at log N of th elements
- this is because we know something about the element which helps us make an efficient choice
Eg - Merge sort

<!-- Big-O Notation  -->

- It is the relative representation of the complexity of an algorithm

https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation

<!-- Examples of Algorithms having O(1), O(n), O(logn), O(nlogn), O(n^2) time -->

1. O(1)
- Accessing Array Index (int a = ARR[5];)
- Inserting a node in Linked List
- Pushing and Poping on Stack
- Insertion and Removal from Queue
- Finding out the parent or left/right child of a node in a tree stored in Array
- Jumping to Next/Previous element in Doubly Linked List

2. O(n)
- Traversing an array
- Traversing a linked list
- Linear Search
- Deletion of a specific element in a Linked List (Not sorted)
- Comparing two strings
- Checking for Palindrome
- Counting/Bucket Sort

3. O(logn)
- Binary Search
- Finding largest/smallest number in a binary search tree
- Certain Divide and Conquer Algorithms based on Linear functionality
- Calculating Fibonacci Numbers - Best Method

4. O(nlogn)
- Merge Sort
- Heap Sort
- Quick Sort
- Certain Divide and Conquer Algorithms based on optimizing O(n^2) algorithms
- The factor of 'log n' is introduced by bringing into consideration Divide and Conquer.
- Some of these algorithms are the best optimized ones and used frequently.

5. O(n^2)
- Bubble Sort
- Insertion Sort
- Selection Sort
- Traversing a simple 2D array
- These ones are supposed to be the less efficient algorithms if their O(nlogn) counterparts are present.
- The general application may be Brute Force here.

<!-- What is Space Complexity -->
<!-- Reference - https://www.interviewbit.com/courses/programming/topics/time-complexity/ -->

- a measure of how efficient our code is in terms of memory used

Eg -

vector<int> V;
for (int i = 0; i < N; i++)
{
V.push_back(i);
}

- The code snippet ends up creating a vector os size "N".
- space complexity of the code is O(N)

* Additional space/memory is measured in terms of the largest memory used by the program when it runs.
- If you allocated O(N) memory and later free it, that doesn't make the space complexity of your program O(1)
