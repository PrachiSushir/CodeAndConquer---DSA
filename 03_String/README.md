# String
- A string is a collection of characters stored together as a single unit
- Characters can be letters, digits, symbols, or spaces
Example: "Hello".

## Problems covered
1. Reverse Only Letters

**Intuition:**  
We only want to reverse alphabet characters while keeping symbols at the same position.  
Using two pointers from both ends, we skip non-letters and swap only valid letters.

2. Longest Common Prefix

**Intuition:** 
Assume the first string as the common prefix and compare it with every other string.  
Whenever characters mismatch, shrink the prefix until it matches all strings.

3. Reverse Vowels of a String

**Intuition:**  
Only vowels need to be reversed, while other characters stay fixed.  
Using two pointers from both ends helps find and swap vowels efficiently.

4. Isomorphic Strings

**Intuition:**  
Each character in the first string must map to exactly one character in the second string.  
Using two mappings ensures the relationship is one-to-one and conflict-free.

5. Reorganize String

**Intuition:**  
To avoid adjacent duplicate characters, frequent characters must be placed with gaps.  
If any character appears more than (n + 1) / 2 times, rearrangement is impossible.

6. Group Anagrams

**Intuition:**  
If two words have the same characters with the same frequency, they belongs to the same group
- Order does not matter

7. Longest palidromic substring

**Intuition**
For each index in the string:
-Treat it as a center
-Expand left and right
-stop when character don't match
-Track the longest palindrome found