/*
# PROBLEM: Find the Index of the First Occurrence in a String (LeetCode 28)

Given two strings:
• haystack (main string)
• needle   (substring)

Find the index of the FIRST occurrence of 'needle'
inside 'haystack'.

If 'needle' does NOT exist in haystack,
return -1.

# IMPORTANT NOTE

• Indexing is 0-based
• Substring must be CONTIGUOUS
• If needle is empty, return 0

# APPROACH (Beginner Friendly)

1. If the needle is empty:
   → return 0 immediately.

2. Loop through the haystack from index 0
   till (haystack.length - needle.length).

   (After this point, needle cannot fit.)

3. For each index i:
   a) Assume needle starts at index i
   b) Compare characters of needle one by one
      with haystack starting from i

4. If at any point characters do NOT match:
   → stop checking this index
   → move to next index

5. If ALL characters of needle match:
   → return the current index i

6. If no match is found after full traversal:
   → return -1

# EXAMPLES

Input:
haystack = "hello"
needle   = "ll"

Output:
2

# TIME COMPLEXITY
- Best case : o(m)
- Example : haystack = "Leetcode"
            needle ="leet"
- worst case : O(n × m)

Where:
• n = length of haystack
• m = length of needle

Reason:
• For each index in haystack,
  we may compare up to m characters


---

# SPACE COMPLEXITY
O(1)

- No extra data structures used.

# REAL-LIFE APPLICATIONS OF THIS LOGIC

1. Text Editors:
   Finding a word inside a paragraph
   (Ctrl + F functionality).

2. Search Engines:
   Matching query keywords inside documents.

3. Plagiarism Detection:
   Finding exact phrase matches in text.

4. DNA & Bioinformatics:
   Searching a gene pattern inside a DNA sequence.

5. Log Analysis:
   Finding error keywords in system logs.


*/
// Logic: 

#include<iostream>
using namespace std;
 int findFirstOccurrence(string haystack, string needle){
    int n = haystack.length();
    int m = needle.length();
    // empty check
    if(needle==""){
        return 0;
    }
    // compare characters of needle

    for(int i=0;i<n-m;i++){
        int j=0;
        while(j<m && haystack[i+j]==needle[j]){
          j++;
        }
        // if full needle match
        if(j==m){
            return i;
        }
    }
    return -1;
 }
int main(){
    string haystack = "hello";
    string needle = "ll";
    cout<<findFirstOccurrence(haystack,needle);
    return 0;
}