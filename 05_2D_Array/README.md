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