/*
PROBLEM: Group Anagrams  
Given an array of strings, group the anagrams together.

Two strings are called anagrams if:
- They contain the SAME characters
- With the SAME frequency
- Order of characters does NOT matter

Example:
Input: ["eat","tea","tan","ate","nat","bat"]

Output:
[
  ["eat","tea","ate"],
  ["tan","nat"],
  ["bat"]
]

APPROACH (Beginner Friendly)

1. Observe that:
   - If two strings are anagrams, then
     their sorted versions will be identical.

   Example:
   "eat" → sort → "aet"
   "tea" → sort → "aet"

2. Use a HashMap:
   - KEY   → sorted version of the string
   - VALUE → list of original strings (anagrams)

3. Traverse each string:
   - Make a copy of the string
   - Sort the copy
   - Insert the original string into map[key]

4. Finally, collect all groups from the map
   and return them as the answer.

TIME COMPLEXITY

O(N * K log K)

Where:
N = number of strings
K = average length of each string

Reason:
- Each string is sorted → O(K log K)
- Done for N strings

SPACE COMPLEXITY
O(N * K)

Because:
- We store all strings in the hashmap
- Along with their sorted keys


REAL-LIFE APPLICATIONS OF THIS LOGIC: 
1. Search Engines:
   Detect similar words typed differently.

2. Spell Checkers:
   Identify words with same letters.

3. Plagiarism Detection:
   Detect rearranged or shuffled text.

4. Word Games (Scrabble, Crossword):
   Validate words formed from same letters.

5. Data Deduplication:
   Group reordered data together.
*/

#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for (string s : strs) {

        string key = s;
        sort(key.begin(), key.end());

        mp[key].push_back(s);
    }

    vector<vector<string>> result;

    for (auto it : mp) {
        result.push_back(it.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for (auto group : ans) {
        for (string word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}