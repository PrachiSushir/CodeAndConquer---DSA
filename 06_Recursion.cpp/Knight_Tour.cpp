/*
PROBLEM STATEMENT:
Given an N × N chessboard represented as a 2D grid where each cell contains
a unique number from 0 to N² − 1, determine whether the given grid represents
a valid Knight’s Tour.

A Knight’s Tour is considered valid if:
1. The knight starts from cell (0, 0) with value 0.
2. Every consecutive number (k → k+1) follows a legal knight move.
3. Each square of the board is visited exactly once.

APPROACH:
1. Start from the top-left cell (0, 0) expecting the value 0.
2. Use a recursive function to verify whether the knight can move to the
   next expected value (expVal + 1) using any of the 8 legal knight moves.
3. At each recursive call:
   - Check if the current position is within board boundaries.
   - Check if the cell value matches the expected value.
4. If the expected value reaches N² − 1, the Knight’s Tour is valid.
5. If any of the 8 possible moves leads to a valid path, return true;
   otherwise, return false.

TIME COMPLEXITY:
O(N²)
Each cell is visited exactly once while validating the sequence.


SPACE COMPLEXITY:
O(N²)
Due to the recursion call stack in the worst case.
No extra visited array is required since the grid itself stores visit order.

REAL-LIFE APPLICATIONS:
1. Robot path verification to ensure all positions are visited exactly once.
2. Game move validation in board games such as chess and puzzle games.
3. Route and sequence verification in delivery or inspection systems.
4. Graph traversal order validation problems.
5. Patrol and surveillance path checking systems.


KEY CONCEPTS USED:
- Recursion
- Backtracking-style DFS
- State validation
- Exhaustive move checking
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expVal) {

    // Invalid position or wrong expected value
    if (r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal)
        return false;

    // Base case: reached last value
    if (expVal == n * n - 1)
        return true;

    // 8 possible knight moves
    return isValid(grid, r - 2, c + 1, n, expVal + 1) ||
           isValid(grid, r - 1, c + 2, n, expVal + 1) ||
           isValid(grid, r + 1, c + 2, n, expVal + 1) ||
           isValid(grid, r + 2, c + 1, n, expVal + 1) ||
           isValid(grid, r + 2, c - 1, n, expVal + 1) ||
           isValid(grid, r + 1, c - 2, n, expVal + 1) ||
           isValid(grid, r - 1, c - 2, n, expVal + 1) ||
           isValid(grid, r - 2, c - 1, n, expVal + 1);
}

bool checkValidGrid(vector<vector<int>>& grid) {
    int n = grid.size();
    return isValid(grid, 0, 0, n, 0);
}

int main() {
    vector<vector<int>> grid = {
        {0, 11, 16, 5, 20},
        {17, 4, 19, 10, 15},
        {12, 1, 8, 21, 6},
        {3, 18, 23, 14, 9},
        {24, 13, 2, 7, 22}
    };

    cout << checkValidGrid(grid);
    
    return 0;
}
