

<!-- How to insert an element inside a sorted array -->

*** In an unsorted array, the insert operation is faster as compared to sorted array because we don’t have to care about the position at which the element to be placed.

<!-- Process -->

- Pass the following parameters inside the function
- the array
- the actual number of elements in the array
- the capacity / size of the array (this is defined when the array is declared)
- the key to be inserted

- First, check whether the array is completely filled or not
- if filled, return the original number of elements size
- if not filled , proceed

- Starting from the last element of the array go towards the lower bound
- Check whether the element to be inserted is less than or more than the current positioned element
- if it is less than, then shift the elements one by one to the right
- if it is more than , stop the loop
- by this time, a space has been created where on the left are the elements less than the element to be inserted and on the right are the elements higher than it

- Insert the element in the space
- Increment the size of elements by 1 and return this value

<!-- Code      -->
https://ideone.com/HDNQnv

<!-- Time Complexity  -->
O(n) [In worst case all elements may have to be moved]
