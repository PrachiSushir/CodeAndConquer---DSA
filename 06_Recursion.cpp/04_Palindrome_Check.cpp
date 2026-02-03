/*
# PROBLEM STATEMENT:
Given a string s, check whether it is a palindrome using recursion.
A palindrome is a string that reads the same forward and backward.
Return true if it is a palindrome, otherwise return false.

Examples:
Input: "madam"
Output: true

Input: "hello"
Output: false


# APPROACH (RECURSION + TWO POINTERS):
We use two pointers:
- left  → starting index of string
- right → ending index of string

Steps:
1. Compare characters at left and right.
2. If they are not equal → string is NOT palindrome → return false.
3. If they are equal → move inward:
      left + 1 and right - 1
4. Repeat the process recursively until:
      left >= right → means we checked all characters → return true.

Base Case:
If left >= right, we have reached or crossed the middle of the string,
so all characters matched → return true.


# TIME COMPLEXITY:
O(n)
Each character is checked only once.

# SPACE COMPLEXITY:
O(n)
Because of recursion call stack (in worst case we go n/2 levels deep).


# REAL LIFE APPLICATION OF THIS LOGIC:
This "mirror checking" logic is used in many real-world problems such as:

1. DNA sequence analysis
   - Checking if a gene pattern reads the same in reverse (biological symmetry)

2. Data validation
   - Detecting symmetric patterns in codes, IDs, or strings

3. Image & pattern processing
   - Checking if a pattern is symmetrical from both sides

4. String algorithms
   - Used in advanced problems like longest palindromic substring,
     palindrome partitioning, and text pattern recognition

This problem builds strong understanding of recursion and two-pointer techniques.

*/
// LOGIC:
#include <iostream>
#include <string>
using namespace std;

bool check(string &s, int left, int right) {
    // Base Case
    if (left >= right)
        return true;

    // If characters don't match
    if (s[left] != s[right])
        return false;

    // Recursive call for inner substring
    return check(s, left + 1, right - 1);
}

bool isPalindrome(string s) {
    return check(s, 0, s.length() - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "Palindrome " << endl;
    else
        cout << "Not a Palindrome " << endl;

    return 0;
}