<!-- Process -->

We pass two values in the function
 - the string
 - '0'

 Zero is passed because we wish to check whether the user has passed an empty string or not
  - if it is zero, then we return

  We will keep calling the recusion function to its next character until we reach '\0'
  - Till then all the characters are stored in a stack
  - After recursion completes, we simply pop out the characters from the top thus giving us the reversed string

<!-- How to recursion looks like -->

https://imgur.com/a/qBbRB

  <!-- Time Complexity  -->

  O(n)
