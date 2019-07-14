<!-- What are catalan numbers -->

- It is a sequence of numbers calculated through the formula

nth Catalan number = (2n)! / (n+1)! (n)!

or

nth Catalan number = (1/n+1) (2n C n)

<!-- How does the sequence look -->

The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

<!-- Eg -->

1. Imagine a number of people are seating on a round table
- we wish to find out how many hanshakes can be performed such that none of the handshakes cross each other

If 2 (n=1) people are there, there is only 1 way
If 4 (n=2) people are there, there are 2 possible ways
If 6 (n=3) people are there, there are 5 possible ways

<!-- pictorial representation -->
https://imgur.com/a/SA9Tt

2. Imagine we have a pencil, and we are allowed to make equal number of diagonal upstrokes and equal number of diagonal downstrokes
- we are not allowed to go below the starting point of the upstroke
- we wish to know how many mountains can be created using these strokes

If 2(n=1 each) strokes are allowed, there is only 1 way
if 4 (n=2 each) strokes are allowed, there are 2 possible ways
if 6 (n=3 each) strokes are allowed, there are 5 possible ways

<!-- pictorial representation -->
https://imgur.com/a/bcFGh


3. Find all the paths possible from (0,0) to (n,n) such that no path comes below the diagonal

- we need to find the number of total paths possible from (0,0) to (n,n)

Consider n=3,
- All paths will have one path up (U) and one path right (R)
- Number of U's will be equal to the Number of R's
- We only need to place these U's and R's in different places
- We need to find combinations such that once U has been placed, R can be placed

That comes as 2n C n =  (2n)! / (n!)(n!) = total paths possible

To get the main answer, we need to find all the paths which cross the diagonal and subtract them from the total possible paths

- The paths which cross the diagonal always end at the coordinator (n+1, n-1)
- so these are the number of paths from (0,0) to (n+1,n-1) = 2n C n-1 = (2n)!/(n-1)!(n+1)!

So, the calculation is as follows:

https://imgur.com/a/6N2wG

Hence the formula = (1/n+1) * (2n!)/(n!)(n!)

4. Parenthesizing of expressions with (n+1) terms

When n =2 , number of terms = 3
Let the terms be "a b c"
- we have to maintain this order at all costs
- we have to parenthesize two alphabets at a time and multiply all the terms

- For "3" (n=2) terms the following is possible

((a,b),c) and  (a,(b,c))

- For "4" (n=3) terms

((a,b),(c,d))  ,  (a,((b,c),d)), ((a,b),c),d), (a,(b,(c,d))) , ((a,(b,c)),d)

These also follow the catalan number formula

5. Triangulation of (n+2) sides

In how many ways triangles can be drawn with a figure with "n+2" sides

<!-- pictorial representation -->

https://imgur.com/a/trW0m
