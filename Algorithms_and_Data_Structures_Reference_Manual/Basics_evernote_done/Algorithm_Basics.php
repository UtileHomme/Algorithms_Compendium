<!-- How to find which algorithm is better among two (What is Asymptotic Analysis)? -->

<!-- Reference -->
https://www.geeksforgeeks.org/analysis-of-algorithms-set-1-asymptotic-analysis/

- The performance of an algorithm is measured in terms of its input size
- We don't measure the actual running time.
- We calculate how does the time/space  taken by an algorithm increase/decrease with input size

- Which algorithm (Assume sorting here) is best for a given application depends on
    - the number of items to be sorted,
    - possible restrictions on the item values
    - the architecture of the computer
    - kind of storage devices to be used (main memory, disks, tapes etc)

- An algorithm is said to be correct for every input instance
    - when it halts with the correct output
    - solves the given computational problem

Example -
- let us say we run the Linear Search on a fast computer and Binary Search on a slow computer.
- For small values of input array size n, the fast computer may take less time.
- But, after certain value of input array size, the Binary Search will definitely start taking less time compared to the Linear Search
even though the Binary Search is being run on a slow machine.
- The reason is the order of growth of Binary Search with respect to input size is logarithmic
while the order of growth of Linear Search is linear.
- So the machine dependent constants can always be ignored after certain values of input size.

** We try to aim for less time and less memory during analysis of algorithms

*** Linear search = order of growth is linear ; Binary search = order of growth is logarithmic

** Algorithms are of 2 types
- Iterative
- Recursive

-- If neither of the above, the time complexity is O(1)
