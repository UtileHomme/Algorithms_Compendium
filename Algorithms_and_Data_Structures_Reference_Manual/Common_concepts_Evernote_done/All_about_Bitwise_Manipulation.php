<!-- Reference - https://www.youtube.com/watch?v=NLKQEOgBAnw -->

<!-- How to represent a negative number into binary -->

The first index represents the "sign" of the number
- For positive numbers it is "0"
- For negative numbers it is "1"

- Calculate the two's complement

Step 1
- Convert the number into binary

Step 2
- Invert all the binary digits

Step 3
- Add "1" at the end of the binary digit to obtain the two's complement

https://imgur.com/a/qZUHU

<!-- Logical vs Arithmetic Shifts -->

1. Logical Shift
- This is divided into two parts
a. Left shift
- Involves shifting the bits on the right to the left and putting a "0" at the empty place on the right

b. Right shift
- involves shifting the bits on the left to the right and putting a "0" at the empty place on the left

https://imgur.com/a/pxhUG

- The representations on the left and right are mathematically related to the original number
- Left representation number = 2 * original number
- Right representation number = original number / 2

2. Arithmetic shifts
- In this case, for a right shift, we shift all the binary digits to the right, we replace the sign bit place with the "original sign" bit
- this helps us preserve the mathematical relation between the shifted number and the original number

https://imgur.com/a/tjBc4

<!-- How to represents Bit Masks -->

<!-- And Operator -->
<!-- Reference - https://www.geeksforgeeks.org/?p=126943 -->

- Takes two numbers as operands and does "AND" on every bit of two numbers
- the result of "AND" is "1" only if both the bits are "1"

0 & 0 = 0
0 & 1 = 0
1 & 1 = 1

<!-- Or operator -->

- Takes two numbers as operands and does "OR" on every bit of two numbers
- the result of "OR" is "1" only if any of the two bits are "1"

0 || 0 = 0
0 | 1 = 1
1 || 1 = 1

<!-- Xor Operator -->
- exactly one of the variables should have value of "1" to give the output as "1"
- rest of the cases will give "0"

0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 1 = 0

<!-- Left shift (<<) -->

- Takes two numbers, left shifts the bits of the first operand; the second operand decides the number of places to shift

<!-- Right shift (>>) -->

- Takes two numbers, right shifts the bits of the first operand; the second operand decides the number of places to shift

<!-- Not (~) operator -->

- takes the number and inverts all its bits

<!-- Facts about bitwise operators -->

1. The left and right shift operators should never be used for negative numbers
- the result is undefined behaviour

Eg -
a. -1 << 1 (undefined)
b. 1 << -1 (undefined)

- if the number is shifted more than the size of the integer, the behaviour is undefined

2. The bitwise operators should not be used in place of logical operators

- The result of Logical operators( &&, || and !) is either 0 or 1, but the bitwise operators return an integer value
- the logical operators consider any non-zero operand as 1

3. The left shift operator is equal to multiplication by "2"
- the right shift operator is equal to division by "2"

** works only when the numbers are positive

4. The "&" operator can be used to check if a number is odd or even

- The value of expression "(x & 1)" would be "non-zero" if "x" is "odd"
- it would be zero otherwise

5. The "~" operator should be used carefully
- the result of "~" operator on a small number can be a big number if the result is stored in an unsigned variable
- the result may be negative if the result is stored in signed variable

<!-- Binary System  -->

<!-- How to convert arbitary binary system to its decimal equivalent   -->
<!-- Reference - https://www.interviewbit.com/courses/programming/topics/math/ -->

- Let's first look at the value of "10000...n times (1 followed by n 0s)"
- This number will only come after we've tried all possible "n" digit numbers in the binary system which has

2 * 2 * 2 * 2 * ... n times possibilities (every position can either have 0 or 1) = 2^n possibility which covers numbers from 0 to 2^n-1

- the value of 1000...n times = 2^n

-- Any number like "1010110" can be expressed as "1000000 + 10000 + 100 + 10 = 2^6 + 2^4 + 2^2 + 2^1"
