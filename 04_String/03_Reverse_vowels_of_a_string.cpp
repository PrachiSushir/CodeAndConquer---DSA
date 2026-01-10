/*Problem Statement: 
Given a string s, reverse only the vowels in the string.
The consonants and other characters must remain in their original positions.
Vowels include:
a, e, i, o, u (both lowercase and uppercase)
Example 1:
Input: "hello"
Output: "holle"

Example 2:
Input: "leetcode"
Output: "leotcede"

Constraints:
1 ≤ s.length ≤ 100000
The string contains printable ASCII characters.

Approach (Two Pointer Technique):
Define a function isVowel(char c) that checks if a character is a vowel.
Use two pointers:

left starting at index 0
right starting at s.length() - 1
Move left forward until it finds a vowel.
Move right backward until it finds a vowel.
Swap the vowels at left and right.
Move both pointers towards each other.
Stop when left becomes greater than or equal to right.
Return the modified string.
Why this approach works
It only scans each character at most once → O(n) time
It swaps only necessary characters → efficient
No extra string is used → O(1) extra space
*/

#include <iostream>
#include <string>
using namespace std;

// function to check if a character is a vowel
bool isVowel(char c) {
    c = tolower(c); // convert to lowercase so we check only a,e,i,o,u
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string reverseVowels(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // move left pointer until a vowel is found
        while (left < right && !isVowel(s[left])) {
            left++;
        }

        // move right pointer until a vowel is found
        while (left < right && !isVowel(s[right])) {
            right--;
        }

        // swap the two vowels
        swap(s[left], s[right]);

        // move pointers inward
        left++;
        right--;
    }

    return s;
}

int main() {
    string s = "hello";
    cout << reverseVowels(s); // output: holle
    return 0;
}