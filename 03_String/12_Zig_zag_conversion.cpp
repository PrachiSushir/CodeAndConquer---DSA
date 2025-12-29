/*
# Problem Name: ZigZag Conversion
LeetCode Problem Number: 6


# Problem Statement:

Given a string `s` and an integer `numRows`, write the string in a zigzag pattern
on the given number of rows and then read it row by row.

Example:
Input: s = "PAYPALISHIRING", numRows = 3

ZigZag Pattern:
P   A   H   N
A P L S I I G
Y   I   R

Output:
"PAHNAPLSIIGYIR"

# Algorithm Steps:

1. Handle edge case: if numRows == 1.
2. Initialize a vector<string> of size numRows.
3. Maintain:
   - currRow → current row index
   - direction → whether we are moving up or down
4. Append characters accordingly.
5. Combine all rows.


# Time Complexity:

O(n)
- Each character is visited exactly once.

# Space Complexity:

O(n)
- Extra space used to store zigzag rows.


# Practical / Real-Life Uses:

1. Text formatting in UI designs.
2. Data encryption and obfuscation techniques.
3. Pattern-based data representation.
4. Interview problem to test string traversal logic.
5. Simulation of wave or zigzag motion patterns.

*/

#include <iostream>
#include <vector>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1 || s.length() <= numRows)
        return s;

    vector<string> rows(numRows);
    int currRow = 0;
    bool goingDown = false;

    for (char c : s) {
        rows[currRow] += c;

        // Change direction at top or bottom
        if (currRow == 0 || currRow == numRows - 1)
            goingDown = !goingDown;

        currRow += goingDown ? 1 : -1;
    }

    // Combine all rows
    string result;
    for (string row : rows)
        result += row;

    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << convert(s, numRows);
    return 0;
}
