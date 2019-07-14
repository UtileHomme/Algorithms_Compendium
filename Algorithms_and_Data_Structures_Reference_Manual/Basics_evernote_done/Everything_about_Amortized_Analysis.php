<!-- What is Amortized Analysis -->
<!-- Reference - https://www.youtube.com/watch?v=MTl8djZFWE0 -->

- Taking the cost of operation over an extended period of time

Eg - Assume we wish to buy some stocks
- First time cost = 10
- Second time cost = 20
- Third time cost = 15
- Fourth time cost = 30

Take the average of the above and we get the amortized cost
= 75/4 = 18.75

** Initially we have an array of size n
- Assume all indices are filled. The best way is to create a new array of double the size
- We'll copy the elements from first array to the second array

Cost of Insertion is 1 (if we are entering only one element)
OR
Cost of Insertion is the effort made to double the size of the array and insertion the size of the array elements into the new array
= 2*size of array + size of the array
= 3 * size of array

<!-- Time Complexity (The normal way) -->

- We are going to insert "n" elements into the array
- As discussed above, insertion of each element takes (3n)

Time Complexity = (n) * (3n) = O(n^2)

<!-- Time Complexity (Amortized way) -->

- Initially size of array is 1

Array looks like :   | 1 |

Time taken = 1

- Now we have to double the size of the array and copy the old elements and finally insert a new element

Array looks like :  | 1 | 2 |

Time taken = 2 + 1 + 1

- Now we have to double the size of the array and copy the old elements and finally insert a new element

Array looks like : | 1 | 2 | 3 |  |

Time taken = 4 + 2 + 1  (after insertion of 3rd element)
Time taken = 1 (after insertion of 4th element)

- Now array becomes 8

Time taken = 8 + 4 + 1
1,1,1

- Now array becomes 16

Time taken = 16 + 8 + 1
1,1,1,1,1,1,1

<!-- How do the shifts in sizes look like -->

1 -> 2 -> 4 -> 8 -> 16 -> .... -> 2n

3 * (1 + 2 + 4 + 8 + ... 2n)
3 * (4n -1) = 12n = O(n)
