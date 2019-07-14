<!-- How the reversed linked list should look like -->

https://imgur.com/a/oqNbE

<!-- How to go about it -->

We need to maintain 3 pointers
- one for the previous position
- one for the current position
- one for the next position

- We initialize "previous pointer" as NULL (this is done so that the first element's address part can be assigned NULL in the beginning)
- We initialize "current pointer" as HEAD
- We initialize "next pointer" as NULL

- We run a "while" loop ensuring that it runs till "current pointer" is not = to NULL
- We initialize "next pointer" as "address part of current pointer"
- We then initialize the "address part of current pointer" as the "previous pointer" (this is done the reverse the iteration from right to left)
- we initialize the "previous pointer" as the "newly set current pointer"
- we initialize the "current pointer" as the "newly set next pointer"

<!-- Time Complexity -->
- Since the entire linked list is traversed once, T(n) = O(n)

<!-- Space Complexity -->
- Since no extra memory is used O(1)
