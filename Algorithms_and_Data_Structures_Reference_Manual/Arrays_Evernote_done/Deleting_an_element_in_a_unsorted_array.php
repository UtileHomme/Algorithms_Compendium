<!-- How to delete from element inside a sorted array -->

- Pass the following parameters in the "binary search" function
- the array
- the lower bound
- the upper bound
- the key to be searched

- Pass the following parameters in the "SortedDelete" function
- the array
- the size of the array
- the key to be deleted

Once the position has been found, start the loop from that position till the end
- start replacing the element at the position with the next element
- do this for all elements to the right of 'pos'

- Decrement the size of the array by 1 and return it

<!-- Code -->
https://ideone.com/6K302Z

<!-- Time Complexity  -->
O(n) [In worst case all elements may have to be moved]
