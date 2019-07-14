<!-- How to find all the leaders in an array -->

Leaders are those elements which have all elements to the right of them lesser than them

<!-- Process (Method 1) -->

- we'll need 2 loops here
- First loop starts from first element and goes to the end
- Second loop starts from one element next to the current element (From the first loop) till the end
- if the current element is at any time less than any of the elements on the right of it , we break out of the loop
    - this element CANNOT be a leader

- if the second loop is traversed completely, then 'j' in the second loop will be equal to the size of the array
    - In such a case, print the Current element from the first loop
    - This is the Leader

- Keep doing this till the end of the first loop

<!-- Code -->
https://ideone.com/oi1QUn

<!-- Time Complexity -->
O(n*n)

<!-- Process (Method 2) -- More Efficient-->

- We'll need one loop here
- We traverse from the penultimate element to the beginning
- We set the last element as the "max element" on the right

- We compare the current "max_right" element with the one on its left
- If max_right is found to be less than that element, then the current max_right is set to this element
- This element is also the Leaders since it is more than the element(s) on its right

<!-- Code -->
https://ideone.com/T1BYIP

<!-- Time Complexity -->
O(n)
