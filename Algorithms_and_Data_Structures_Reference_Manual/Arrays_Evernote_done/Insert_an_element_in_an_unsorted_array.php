<!-- Problem -->
- We have to insert an element at the end of the array keeping constraints in mind

<!-- Process -->
- We maintain two sizes
- size = number of elements presently in the array
- capacity = number of total elements that can exist in the array

- We pass the size, capacity, array and the key to be inserted
- we first check if the size is more than or equal to the capacity
    - if yes, then we cannot enter any elements and we simply return the size

    - if no, we enter the element at the position = size

    - since, we have added a new element, we need to increment the original size by 1
    - we return this new size

- In the main function, we print the new array

<!-- Code -->
https://ideone.com/xf5VCg
