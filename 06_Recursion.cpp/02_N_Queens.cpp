
/*

# PROBLEM STATEMENT:
You are given an integer N.
You have to place N queens on an N x N chessboard such that:
1) No two queens are in the same row.
2) No two queens are in the same column.
3) No two queens are in the same diagonal.
Print any one valid arrangement of the N queens.
If no arrangement is possible, print "No solution possible".

# APPROACH (RECURSION + BACKTRACKING):
1) We place queens row by row.
2) For each row, we try placing a queen in every column.
3) Before placing, we check if the position is SAFE using:
   - check column above
   - check left diagonal above
   - check right diagonal above
4) If safe, place queen and recursively solve for next row.
5) If recursion fails, remove queen (BACKTRACK) and try next column.
6) If we reach row == N, it means we successfully placed all queens.

# TIME COMPLEXITY:
Worst case: O(N!)
Reason: In each row we can try up to N columns, and the number of
valid permutations reduces row by row like factorial.

Safe check takes O(N), but overall worst-case complexity is still:
O(N! * N) ~ O(N!)


# SPACE COMPLEXITY:
O(N^2) for board + O(N) recursion stack.

# REAL LIFE APPLICATION:
N-Queen represents real-world "constraint satisfaction problems", like:
1) Scheduling (exam timetable / employee shifts) where conflicts must be avoided.
2) Assigning tasks/resources (no two tasks use same resource at same time).
3) Network channel/frequency allocation (avoid interference like diagonals).
4) Puzzle solving and AI search (backtracking used in Sudoku, path finding).

*/
// LOGIC:

#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int row, int col, vector<vector<int>> &board, int n) {

    // check same column (upar)
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) return false;
    }

    // check left diagonal (upar-left)
    int i = row, j = col;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1) return false;
        i--; j--;
    }

    // check right diagonal (upar-right)
    i = row; j = col;
    while (i >= 0 && j < n) {
        if (board[i][j] == 1) return false;
        i--; j++;
    }

    return true;
}

bool nQueen(int row, vector<vector<int>> &board, int n) {

    // base case
    if (row == n) return true;

    // try placing queen in every column
    for (int col = 0; col < n; col++) {

        if (isSafe(row, col, board, n)) {

            board[row][col] = 1;        // place queen

            if (nQueen(row + 1, board, n)) return true;  // recursion

            board[row][col] = 0;        // backtrack
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, 0));

    if (nQueen(0, board, n)) {
        // print board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } 
    else {
        cout << "No solution possible" << endl;
    }

    return 0;
}