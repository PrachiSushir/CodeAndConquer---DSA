/*

# PROBLEM: Reorganize String  (LeetCode 767)

Given a string s, rearrange its characters so that 
NO two adjacent characters are the same.

If possible → return the rearranged string.
If not possible → return an empty string "".

Example:
Input: "aab"
Output: "aba"

Input: "aaab"
Output: ""

# APPROACH (Beginner Friendly)
1. Count frequency of every character.
2. Check if rearrangement is possible using:
        maxFreq > (n + 1) / 2  → then return ""
   Because no character should appear more than half 
   of the total length (otherwise, impossible).
3. Use a Max Heap (priority_queue in C++) to always pick 
   the character with highest remaining frequency.
4. Keep picking the top TWO different characters and 
   place them in the result string.
   - This prevents identical characters from being adjacent.
5. Decrease their frequency and push back if still remaining.
6. If one character is left in heap, add it at the end.

 # TIME COMPLEXITY
O(n + k log k)
n = length of string
k = number of distinct characters (max 26)

Since k is constant (26 letters), 
time ≈ O(n)

# SPACE COMPLEXITY
O(k) → frequency array + heap

REAL-LIFE APPLICATIONS OF THIS LOGIC

1. CPU Task Scheduling:
   Avoid running two heavy tasks back-to-back.

2. Seating Arrangements:
   Two people who shouldn't sit together are separated.

3. Exam Timetable Creation:
   Prevent two tough exams from being on consecutive days.

4. Data Transmission:
   Avoid sending identical signals consecutively to 
   prevent signal distortion.

*/

#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string s) {
    // Step 1: Count frequency of each character
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    int n = s.length();
    int maxFreq = *max_element(freq.begin(), freq.end());

    // Step 2: Check if reorganizing is possible
    // If any character appears more than half → impossible
    if (maxFreq > (n + 1) / 2) {
        return "";
    }

    // Step 3: Max Heap storing pairs (frequency, character)
    priority_queue<pair<int, char>> pq;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            pq.push({freq[i], char(i + 'a')});
        }
    }

    string result = "";

    // Step 4: Keep picking top 2 most frequent characters
    while (pq.size() > 1) {
        auto top1 = pq.top(); pq.pop();
        auto top2 = pq.top(); pq.pop();

        // Place both characters (they are guaranteed to be different)
        result += top1.second;
        result += top2.second;

        // Reduce frequency and push back if still remaining
        if (--top1.first > 0) pq.push(top1);
        if (--top2.first > 0) pq.push(top2);
    }

    // Step 5: If one character is left, add it at the end
    if (!pq.empty()) {
        result += pq.top().second;
    }

    return result;
}

int main() {
    string s = "aab";
    cout << reorganizeString(s);
    return 0;
}