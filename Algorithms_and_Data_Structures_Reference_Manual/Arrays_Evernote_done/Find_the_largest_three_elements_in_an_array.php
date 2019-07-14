<!-- Process -->

- Initialise all three variables with the smallest "integer" possible
- Traverse the array and check if the current element is more than the "first" element
    - If yes , then do the following
    third = second
    second = first
    first = current element

    if no, then check whether the current element is more than the "second" element
    - if yes, then do the following
    third = second
    second = current element

    - if no, then check whether the current element is more than the "third" element
    - if yes, then do the following
    third = current element
