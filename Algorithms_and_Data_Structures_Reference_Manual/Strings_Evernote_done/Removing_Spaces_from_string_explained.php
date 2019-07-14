<?php

// Process

- We pass the string into another function
- The idea is to maintain a "count" of all the non-spaced characters
- while traversing through the array of strings, if a non-spaced character is found do this:

    str[count++] = str[i]

- this will pass those non-spaced characters into an array containing only of those characters

// Time complexity

O(n)    

 ?>
