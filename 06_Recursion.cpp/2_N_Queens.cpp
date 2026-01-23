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