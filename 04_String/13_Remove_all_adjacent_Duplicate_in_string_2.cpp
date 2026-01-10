/*
# Problem Name : Remove All Adjacent Duplicates in String II
LeetCode No  : 1209

# Problem Statement:

You are given a string s and an integer k. 
The task is to repeatedly remove k consecutive identical characters 
from the string until no such group exists.

After removing a group of k characters, the remaining parts of the string 
are joined together, and the process continues until no more removals are possible.

Return the final string after all possible removals have been made.

Example:

Input  : s = "deeedbbcccbdaa", k = 3
Output : "aa"

Explanation:
- Remove "eee" → "ddbbcccbdaa"
- Remove "bbb" → "ddcccbdaa"
- Remove "ccc" → "ddbdaa"
- Remove "ddd" → "aa"


# Approach:

We use a stack-based approach to efficiently track characters and their counts.

1. Traverse the string character by character.
2. Use a stack that stores pairs of (character, frequency).
3. If the current character is the same as the top of the stack:
   - Increment its count.
   - If the count becomes equal to k, remove it from the stack.
4. If the character is different, push it onto the stack with count = 1.
5. After processing the entire string, rebuild the final string 
   using the remaining stack elements.

This approach avoids repeated string modifications and works efficiently.


# Time Complexity:

O(n)
- Each character is pushed and popped from the stack at most once.

# Space Complexity:

O(n)
- Stack is used to store characters and their frequencies.


# Practical Real-Life Applications:

1. Text Editors:
   - Automatically removing repeated unwanted characters (e.g., "!!!!!" → "!").

2. Data Cleaning:
   - Removing noisy or repeated patterns in logs or user-generated text.

3. Message Compression:
   - Simplifying repeated character sequences before storage or transmission.

4. Input Validation:
   - Eliminating accidental long key presses in forms or chat applications.

5. DNA/String Processing:
   - Removing repeated patterns during biological string analysis.


*/
// Logic: 

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

    string removeDuplicates(string s, int k) {

        // Stack stores: (character, frequency)
        stack<pair<char, int>> st;

        // Traverse each character in the string
        for (char c : s) {

            // Case 1: Same as top character
            if (!st.empty() && st.top().first == c) {
                st.top().second++;

                // If frequency becomes k, remove it
                if (st.top().second == k) {
                    st.pop();
                }
            }
            // Case 2: New character
            else {
                st.push({c, 1});
            }
        }

        // Build the final answer from stack
        string result = "";

        while (!st.empty()) {
            result.append(st.top().second, st.top().first);
            st.pop();
        }

        // Stack gives reverse order
        reverse(result.begin(), result.end());

        return result;
    }
    int main() {

    string s = "deeedbbcccbdaa";
    int k = 3;

    cout << removeDuplicates(s, k);

    return 0;
}
