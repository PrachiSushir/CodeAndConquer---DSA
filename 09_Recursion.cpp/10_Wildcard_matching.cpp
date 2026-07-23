/*
# PROBLEM STATEMENT
Wildcard Matching (LeetCode 44)
Given a string s and a pattern p, check if the
pattern matches the entire string.

Pattern rules:
'?'  → matches any single character
'*'  → matches any sequence of characters
        (including empty)
Return true if the match is complete.

# APPROACH (RECURSION + MEMOIZATION)

We use recursion to try all possibilities.

To avoid TLE, we use DP (memoization).

dp[i][j] means:
Does s starting from index i match p starting
from index j?

dp values:
-1 → not computed
 0 → false
 1 → true

# TIME COMPLEXITY

O(n × m)
Each state (i, j) is solved once due to DP.

# SPACE COMPLEXITY

O(n × m) for DP table + recursion stack.

# REAL LIFE APPLICATION

1) File searching (*.txt, a?c.cpp)
2) Command-line wildcard matching
3) Search filters
4) Basic regex engines
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> dp;

bool solve(size_t i, size_t j, string &s, string &p) {

    // Case 1: both string and pattern finished
    if (i == s.size() && j == p.size())
        return true;

    // Case 2: pattern finished but string not
    if (j == p.size())
        return false;

    // Already solved
    if (dp[i][j] != -1)
        return dp[i][j];

    bool ans = false;

    // Character match or '?'
    if (i < s.size() && (s[i] == p[j] || p[j] == '?')) {
        ans = solve(i + 1, j + 1, s, p);
    }
    // '*' wildcard
    else if (p[j] == '*') {
        ans = solve(i, j + 1, s, p) ||
              (i < s.size() && solve(i + 1, j, s, p));
    }

    return dp[i][j] = ans;
}

bool isMatch(string s, string p) {
    dp.assign(s.size() + 1, vector<int>(p.size() + 1, -1));
    return solve(0, 0, s, p);
}

int main() {
    string s, p;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter pattern: ";
    cin >> p;

    if (isMatch(s, p))
        cout << "Match Found";
    else
        cout << "No Match";

    return 0;
}
