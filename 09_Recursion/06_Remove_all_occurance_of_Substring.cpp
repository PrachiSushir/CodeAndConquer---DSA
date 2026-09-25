/*
# PROBLEM: Remove All Occurrences of a Substring

Given two strings 's' and 'part', repeatedly remove the LEFTMOST occurrence 
of 'part' from 's' until 'part' no longer exists in the string. 
Return the final string.

Example:
Input:  s = "daabcbaabcbc", part = "abc"
Output: "dab"

Explanation:
daabcbaabcbc
→ remove "abc" → dabaabcbc
→ remove "abc" → dababc
→ remove "abc" → dab
No more "abc" left.

# APPROACH (Recursive)

1. Find the first occurrence of 'part' in 's'.
2. Base Case:
   If 'part' is not found, return 's' (nothing left to remove).
3. Otherwise:
   - Split the string into two parts:
       left  = substring before 'part'
       right = substring after 'part'
   - Join them to form a new string.
4. Recursively call the function on the new string.
5. Return the final cleaned string.

# TIME COMPLEXITY

Let:
n = length of string s
m = length of substring part

Each recursive call:
- find() takes O(n)
- Creating new string takes O(n)

In worst case, recursion runs about O(n/m) times.

Overall Time Complexity: O(n^2)
Space Complexity: O(n) due to recursion and new strings.

# REAL-LIFE APPLICATIONS

1. Text filtering / removing banned words from messages
2. Cleaning unwanted patterns in DNA sequence analysis
3. Removing specific macros/patterns in code preprocessors
4. Repeated formatting cleanup in documents

*/
// LOGIC:

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    // Find position of substring
    int pos = s.find(part);

    // Base Case: If substring not found, return the string
    if (pos == string::npos) {
        return s;
    }

    // Remove the found substring
    string left = s.substr(0, pos);
    string right = s.substr(pos + part.length());

    // Recursive call with new string
    return removeOccurrences(left + right, part);
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    string result = removeOccurrences(s, part);
    cout << "Final String: " << result << endl;

    return 0;
}