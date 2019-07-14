<!-- Finding the Length of the Linked List -->

<!-- Process 1 - Iterative -->

- initialize "count" variable with "0" at the beginning of the function
- Till the value of "temp (this is the passed head)" is not NULL, keep on traversing the Linked List and incrementing "count"
- Return the count

<!-- Code -->
https://ideone.com/qdTBlN

<!-- Process 2 - Recursive -->

- Check whether at any time, "head/temp" is NULL
- if so return 0

- If not, the return 1 + functionname(temp/head -> next)
- All this will be stored in a stack and the top value will have the final count

<!-- Code -->
https://ideone.com/QD4PNT
