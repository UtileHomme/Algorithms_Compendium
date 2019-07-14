<?php

// Problem
http://www.geeksforgeeks.org/insertion-sort/

// Reference
https://medium.com/basecs/inching-towards-insertion-sort-9799274430da

// Code

https://ideone.com/QvDGeL

// Process

- We assume that the first element is the "sorted part" of the array and the elements thereon are "unsorted"
- we traverse the array from the second element
- we initialize the second element as the key
- we initialize another variable 'j' with the index just less than the present "loop" element

- using "j" we are keeping track of all the elements presently in the "sorted" part of the array

- we now check whether the value of the last element of the "sorted" part is more than the first element of the "unsorted" part
- if this is the case, then our assumption of the "sorted" array is wrong
- we shift the last element of the "sorted" part to the right, reduce the value of index of "variable" tracking the sorted elements
- by this we are comparing all "assumed" sorted elements with that of "key" and putting the "key" in its appropriate position

- after the "while" loop has ended, we put the "key" at its appropriate position

- refer to Cards arrangement analogy in Rummy game

// Example with Explanation

Input Array = 23   |   10   |  5  |   6   | 7
              0          1      2      3     4

i = 1;
key = a[1] = 10
j = i - 1 = 0

Since j>=0 and a[j] > key
- we need to shift a[j] to make room for "key" later
Therefore, a[1] = 23  and j = j-1 = -1

Since j is not more than 0 anymore, come out of the "while" loop
- a[j+1] = a[0] = key = 10

Carry this process out till i = n;

// Condition of Invariance

- We are trying to maintain two subarrays
- Sorted and unsorted
- We can claim that what ever be the position of the "first loop variable(here it is i)", "i+1" numbers will be sorted from the left

// Condition of Termination

- In the first loop, we have mentioned that the loop should end at "n"

//Calculating the Time Complexity

// Worst case (when array is reverse sorted)
for i=1, the while loop will run 1 time
for i=2, the while loop will run 2 times

T(n) = 1 + 2 + 3 + ........ (n-1)
        = sum of "n" natural numbers
        = O(n^2)

//Best case (when array is sorted)

for i =1, the while loop won't run at all
for i =2, the while loop won't run at all

Since, we are running the for loop once, therefore O(n)

// Auxiliary Space
O(1)

// Boundary cases
- it takes maximum time to sort if elements are sorted in the reverse order
- it takes minimum time (Order of n) when elements are already sorted

// Algorithmic Paradigm
Incremental Approach

** In-place sorting
** Stable sorting

// Uses
- it is used when the number of elements are small
- can also be used when most of the elements are sorted and only some are misplaced

// Insertion Sort properties in a nutshell
https://imgur.com/a/fjRUc

// Summing up the running times of insertion sort

Worst case: Θ(n2) \Theta(n^2) Θ(n​2​​).
Best case: Θ(n) \Theta(n) Θ(n).
Average case for a random array: Θ(n2) \Theta(n^2) Θ(n​2​​).
"Almost sorted" case: Θ(n) \Theta(n) Θ(n).

// Loop Invariant
- At any interation of "i", we can say that "i" elements are already sorted

// When to look for the Loop Invariant
- Immediately after the initial assignment of the loop counter variable and just before the first test in the loop header

 ?>
