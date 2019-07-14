<!-- Search a given key in a linked list -->

<!-- Process 1 - Iterative -->

- Check whether the "passed HEAD" is presently NULL Or not using "While" loop
- if null, then return "False"

- If not NULL, check if the current HEAD has its data equal to the given key
- If the key is found, then return "True"
- If not found then move to the next "HEAD"

- If none of the above happens, return "false" by default

<!-- Code -->
https://ideone.com/aU8Pqk


<!-- Process 2 - Recursive -->

- Check whether the "head" is null or not using the "if" condition
- If null, return "false"

- Check if the key is equal to the current "Head" data
- if yes, return true else move forward

- If none of the above happens, call the function by passing the "Next of the current head" to traverse through the linked list

<!-- Code -->
https://ideone.com/0qbQSn
