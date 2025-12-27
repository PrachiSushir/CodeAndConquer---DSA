/*
# PROBLEM STATEMENT:
Given an array of characters `chars`, compress it in-place using the following rules:
- Consecutive repeating characters should be replaced by the character followed by its count.
- If a character appears only once, it should remain as it is.
- The compressed result must be stored inside the original array.
- No extra array should be used.

Example:
Input:  chars = ['a','a','b','b','c','c','c']
Output: ['a','2','b','2','c','3']


# APPROACH:
1. Use two pointers:
   - One pointer to read characters from the array.
   - One pointer to write the compressed output back into the same array.
2. Traverse the array and count how many times the current character repeats consecutively.
3. Write the character at the write position.
4. If the count is greater than 1:
   - Convert the count into a string.
   - Write each digit of the count into the array.
5. Continue this process until the entire array is processed.
6. Return the final length of the compressed array.

This approach ensures that compression is done in-place without using extra memory.


# TIME COMPLEXITY:
- Time Complexity: O(n)
  Each character in the array is processed only once.

# Space Complexity: O(1)
  No extra space is used apart from a few variables.


# REAL-LIFE USES OF STRING COMPRESSION:
- Data Storage Optimization:
  Helps reduce memory usage by compressing repeated characters in files.

- Network Data Transmission:
  Smaller data size leads to faster data transfer over networks.

- Log File Compression:
  Useful for compressing repeated log messages in system logs.

- Text Processing Systems:
  Improves performance when handling large strings with repetitive data.
*/

// Logic:

#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string result = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int count = 1;

        // count consecutive characters
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        // add character and count
        result += s[i];
        result += to_string(count);
    }

    return result;
}

int main() {
    string s = "aaabbc";
    cout << compressString(s);
    return 0;
}
