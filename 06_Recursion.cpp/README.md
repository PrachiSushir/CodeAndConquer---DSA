# Problems covered
 
 1. Last Occurance
**Intution:**
 
Recursion checks the entire array first and while returning back,
it gives priority to later occurrences, which helps in finding the last occurrence.

2. N Queens

**INTUITION:**
Queen attacks in 3 directions that matter while placing row-by-row:
1) Same column
2) Left diagonal
3) Right diagonal

So the best idea is:
Place queens ONE ROW AT A TIME.
Because if we place only 1 queen per row, automatically:
- No two queens will be in the same row
Now we just need to ensure:
- Not in same column
- Not in diagonals

Also:
If at any row we cannot place a queen safely, it means the previous
choice was wrong.
So we go back and change the placement.
This is called:
BACKTRACKING (try → fail → undo → try again)