# String
- A string is a collection of characters stored together as a single unit
- Characters can be letters, digits, symbols, or spaces
Example: "Hello".

## Problems covered
1. Reverse Only Letters(Leetcode 917):

**Intuition:**  
We only want to reverse alphabet characters while keeping symbols at the same position.  
Using two pointers from both ends, we skip non-letters and swap only valid letters.

2. Longest Common Prefix(Leetcode 14):

**Intuition:** 
Assume the first string as the common prefix and compare it with every other string.  
Whenever characters mismatch, shrink the prefix until it matches all strings.

3. Reverse Vowels of a String(Leetcode 345):

**Intuition:**  
Only vowels need to be reversed, while other characters stay fixed.  
Using two pointers from both ends helps find and swap vowels efficiently.

4. Isomorphic Strings(Leetcode 205):

**Intuition:**  
Each character in the first string must map to exactly one character in the second string.  
Using two mappings ensures the relationship is one-to-one and conflict-free.

5. Reorganize String(Leetcode 767):

**Intuition:**  
To avoid adjacent duplicate characters, frequent characters must be placed with gaps.  
If any character appears more than (n + 1) / 2 times, rearrangement is impossible.

6. Group Anagrams(Leetcode 49):

**Intuition:**  
If two words have the same characters with the same frequency, they belongs to the same group
- Order does not matter

7. Longest palidromic substring(Leetcode 5):

**Intuition:**
- For each index in the string:
- Treat it as a center
- Expand left and right
- stop when character don't match
- Track the longest palindrome found

8. Find the Index of the First Occurrence in a String(LeetCode 28):

**Intuition:**
- Start checking from each index of haystack
- From that index, try to match all characters of needle
- If all characters match --> return that index
- If no match found after full traversal --> return -1.

9. String to integer(leetcode 8):

**Intuition:**
- Ignore the spaces
- Notice the sign (-)
- Read digits until something invalid appears
- Stop and return the number
- check overflow (INT_MAX, INT_MIN)-->
- return INT_MAX or INT_MIN according to sign.

10. String compression(Leetcode 443):

**Intuition:**
- Traverse the string character by character
- Count how many times the same character appears consecutively
- Append:
-   the character
-   followed by its count
- Move to the next new character