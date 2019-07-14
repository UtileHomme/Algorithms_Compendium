<!-- Reference - https://www.youtube.com/watch?v=92S4zgXN17o&index=1&t=0s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P -->

A dictionary is organized as a sorted set of words

<!-- What is a datastructure -->

- A datastructure is a way to store and organize data in a computer, so that it can be used efficiently.
- particular pattern for organizing information in order to make interacting with the information in the ways we want , less expensive

<!-- What are Abstract Data types  -->
<!-- Reference - https://www.youtube.com/watch?v=HdFG8L1sajw&index=2&t=0s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P -->

We only want an abstract view. We are only concerned about what are the operations they do.
We do not bother about the "HOW" but the "WHAT"

 Eg. List
- Store a given number of elements of any type
- Read elements by position
- Modify elements at a position

Therefore, ADTs define the data and operations but not the implementation.

<!-- What is the issue with arrays and what are the time complexities for different cases -->

If we are accessing the element at a particular index, time taken will be 'constant time'
          Time Complexity = O(1)

If we are inserting an element at the end (provided the list is not full), again it will take constant time
          Time Complexity = O(1)

If we are inserting in a particular position, then in the worst case it will depend on the number of items to be shifted
          Time Complexity - O(n)

To remove an element at a particular index, it depends on number of elements to be shifted
          Time Complexity = O(n)

* Better way is Linked list because if the length of the array is exhausted , we have to create an array of bigger size,
copy the elements to it everytime. This is not practically feasible.
Linked list allows data to be entered dynamically
