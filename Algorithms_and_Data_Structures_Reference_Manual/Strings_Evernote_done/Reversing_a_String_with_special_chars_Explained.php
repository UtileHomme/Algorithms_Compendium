<!-- Process -->

- Traverse through the string array and find out which are "alphabets" and which are "special characters"
- Pass the alphabets into a temporary array
- Also find the new length of the temporary array
- Using this new length, apply the reversal algorithm on the temporary array

- Now, the temp array has reversed alphabets
- Traverse through the string array and wherever an "alphabet" is found, replace it with the alphabets of the temp array

<!-- Time Complexity -->
O(n)

-- requires extra space and takes two traversals of the input string
