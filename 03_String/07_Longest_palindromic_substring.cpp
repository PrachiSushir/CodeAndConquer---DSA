/*

- PROBLEM: Longest Palindromic Substring (LeetCode 5)

Given a string s, find the LONGEST substring of s
that is a PALINDROME.

A palindrome is a string that reads the same
forward and backward.

- IMPORTANT NOTE

• Substring must be CONTIGUOUS
• Single character is always a palindrome

- APPROACH (Beginner Friendly)

1. Every palindrome has a CENTER.
2. Palindromes can be of two types:
   a) Odd length  → one center (e.g. "aba")
   b) Even length → two centers (e.g. "abba")
3. For every index i in the string:
   - Treat i as center for ODD palindrome
   - Treat (i, i+1) as center for EVEN palindrome
4. Expand left and right while characters match.
5. Keep updating the longest palindrome found
   using start index and length.
6. Finally, return the substring using substr().

- EXAMPLES

Input:  "babad"
Output: "bab" (or "aba")

Input:  "cbbd"
Output: "bb"

- TIME COMPLEXITY

O(n²)

Reason:
• n centers
• each center can expand up to n

- SPACE COMPLEXITY

O(1)
No extra data structures used.

- REAL-LIFE APPLICATIONS OF THIS LOGIC

1. Text Editors:
   Finding symmetric patterns in text.

2. DNA Sequence Analysis:
   Detecting palindromic gene structures.

3. Cybersecurity:
   Pattern and symmetry detection.

4. Natural Language Processing:
   Analyzing word and sentence symmetry.

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void expandFromCenter(string &s, int right, int left,int &start, int &maxLength){
    int n = s.length();

    while(left >= 0 && right<n && s[left]==s[right]){

    int currentLength = right - left +1;

    if(currentLength> maxLength){
        maxLength = currentLength;
        start = left;
    }
    left--;
    right++;
    }

}
string longestPalindrome(string s){
    int n = s.length();
    if(n==0){
        return "";
    }
    int start = 0; //palindrom's start
    int maxLength = 1;

    for(int i=0;i<n;i++){
        //case 1: for odd length of string
        expandFromCenter(s, i, i, start, maxLength);

        //case 2: for even length of string
        expandFromCenter(s, i, i+1, start, maxLength);
    }
    // return longest palindromic string
    return s.substr(start, maxLength);

}

using namespace std;
int main(){
    string s ="babad";
    cout<<"Longest palindromic string: "<<longestPalindrome(s);
    return 0;
}