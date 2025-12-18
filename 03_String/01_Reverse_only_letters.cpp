/*
Problem: Reverse Only Letters (LeetCode 917)

Given a string that contains letters and special characters,
reverse only the English letters while keeping all non-letter
characters in their original positions.

Example:
Input:  "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Approach:
Use the two-pointer method.
1. Initialize pointer i at the beginning and j at the end.
2. Move i forward until it points to a letter.
3. Move j backward until it points to a letter.
4. Swap the letters at i and j.
5. Continue until i >= j.

*/
#include <iostream>
#include <string>
using namespace std;

bool isLetter(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

string reverseOnlyLetters(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {
        if (!isLetter(s[i])) {
            i++;
            continue;
        }
        if (!isLetter(s[j])) {
            j--;
            continue;
        }

        swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

int main() {
    string s = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s);
    return 0;
}