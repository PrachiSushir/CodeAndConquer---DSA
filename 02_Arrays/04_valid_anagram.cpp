

//   Problem:
//   Check whether string t is an anagram of string s.

//   Approach:
//   1. If lengths are different → not an anagram
//   2. Count frequency of each character in s
//   3. Decrease frequency using t
//   4. If all frequencies become zero → valid anagram

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