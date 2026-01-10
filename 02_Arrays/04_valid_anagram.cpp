

// # Problem:
//   Check whether string t is an anagram of string s.

//   Approach:
//   1. If lengths are different → not an anagram
//   2. Count frequency of each character in s
//   3. Decrease frequency using t
//   4. If all frequencies become zero → valid anagram

// # Time Complexity:
//  Second Code (1 loop for both s and t together + 1 loop for 26 chars)
//    O(n) + O(26)  =  O(n)

// # Real Life Applications (Valid Anagram / Frequency Counting):
// - Spell checking & word rearrangement detection (e.g., "listen" ↔ "silent")
// - Plagiarism / cheating detection in word-jumble type questions
// - Cryptography / cipher analysis (checking character frequency patterns)
// - Text processing & NLP (finding words with same letters in search engines)
// - Games like Scrabble / Word puzzles (verify if letters can form a word)
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {

    // Step 1: Length check
    if (s.length() != t.length()) {
        return false;
    }

    // Step 2: Frequency array for 'a' to 'z'
    int freq[26] = {0};

    // Step 3: Count characters of s
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Step 4: Reduce count using t
    for (char ch : t) {
        freq[ch - 'a']--;
    }

    // Step 5: Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "Valid Anagram" << endl;
    } else {
        cout << "Not a Valid Anagram" << endl;
    }

  return 0;
}
