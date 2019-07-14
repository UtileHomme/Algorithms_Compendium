<!-- Process -->

- We need to keep a count of occurrence of all characters of the string
- Initialize a integer array with size "256 (assuming there are 256 characters )"
- Increment the "character" index by 1 whenever that character occurs

Eg - For string = "sample string", array should look like

                    |  2  |  1  |  1  |  1  |  1  |  1  |  1  |
                       s      a    m    p     l     e               and  so on..

- Once, we have those counts, initialize max = -1
- Keep comparing all indexes and the "count" array and updating "max" whenever we encounter a count more than the "current max"
- store the "character" in a variable and return it to the calling function

<!-- Time Complexity  -->

O(n)

<!-- Space complexity -->

O(1)
