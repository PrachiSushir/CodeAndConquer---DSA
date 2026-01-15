1. Search in a 2D matrix(Leetcode 74):

**INTUITION:**
- Think of the matrix as a sorted book shelf.
- First, you find the correct shelf (row) where the book can exist.
- Then, you search within that shelf.
- This avoids checking every book and saves time.

2. Serach in 2D matrix 2(Leetcode 240):

**INTUITION:**

- The top-right element is special because values decrease when moving left and increase when moving down.
- So at every step, we can decide exactly which direction to move.
- Each move removes one full row or one full column from consideration,making the search efficient.
- This avoids checking every element in the matrix.
3. Spiral matrix(Leetcode 54):

**INTUITION:**

- We imagine the matrix as having boundaries on all four sides.
- We start by moving in the right direction across the top boundary.
- Then we move down along the right boundary.
- Next, we move left across the bottom boundary and up along the left boundary.
- After completing one full round, we shrink the boundaries inward.
- This process repeats until all elements are visited exactly once.


