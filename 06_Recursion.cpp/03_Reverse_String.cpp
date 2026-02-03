

/*
PROBLEM STATEMENT (LeetCode – Reverse String):

Write a function that reverses a string.
The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example:
Input:  s = ["H","e","l","l","o"]
Output: ["o","l","l","e","H"]


APPROACH (Recursive – Two Pointer Technique):

1. Use two pointers:
   - left starting from the beginning of the array
   - right starting from the end of the array
2. Swap the elements at left and right positions.
3. Move left forward (left + 1) and right backward (right - 1).
4. Recursively repeat the process.
5. Stop recursion when left >= right (base condition).

This way, the string gets reversed in-place.


TIME COMPLEXITY:

- Time Complexity: O(n)
  Each character is visited once.

- Space Complexity: O(n)
  Due to recursive call stack (no extra data structures used).


REAL LIFE APPLICATION OF THIS LOGIC:

- Reversing text entered by a user (e.g., undo operations).
- Checking palindromes by comparing characters from both ends.
- Reversing data packets or sequences in communication systems.
- String manipulation in text editors or compilers.

*/
// LOGIC:

#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<string>&s, int left, int right){
    // Basecase
    if(left>=right){
        return;
    }
        swap(s[left],s[right]);
    reverseString(s,left+1,right-1);
}
    
int main(){
    vector<string> s = {"H","e", "l", "l","o"};
    int left = 0;
    int right = s.size()-1;
    reverseString(s,left ,right);
    for( string ch : s){
        cout<<ch;
    }
return 0;
}