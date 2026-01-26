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

3. Reverse String(Leetcode 344):

**INTUITION:**

- Swap the first and last characters of the string.
- Once swapped, both characters reach their correct positions.
- Now repeat the same process for the remaining inner part.
- Recursion helps by reducing the problem size each time.
- Stop when the left index crosses the right index(Basecase).

4. Valid palindrome(Leetcode 125):

**INTUITION:**
- Think of a palindrome like a mirror.
- If you stand in the middle of the word and place a mirror:
- Left side should look exactly like the right side.
- So instead of checking the whole string at once, we shrink the problem step by step.
