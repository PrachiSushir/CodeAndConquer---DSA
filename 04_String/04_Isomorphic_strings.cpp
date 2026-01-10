/*
    PROBLEM STATEMENT:
    
    Two strings s and t are isomorphic if every character in s can be replaced 
    to get t. The mapping between characters must be:
      1) One-to-one (no two characters in s map to the same character in t)
      2) Consistent (a character in s must always map to the same character in t)
*/

/*
    APPROACH:
    
    1) Use two maps:
          mp1: maps s → t
          mp2: maps t → s
    2) Traverse both strings together.
    3) If a character is already mapped, check if the mapping matches.
    4) If not mapped, create a new mapping in both directions.
    5) If all characters match consistently, strings are isomorphic.
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, char> mp1;  // s → t
    unordered_map<char, char> mp2;  // t → s

    for (int i = 0; i < s.length(); i++) {
        char a = s[i];
        char b = t[i];

        if (mp1.count(a) && mp1[a] != b) return false;
        if (mp2.count(b) && mp2[b] != a) return false;

        mp1[a] = b;
        mp2[b] = a;
    }
    return true;
}

int main() {
    string s = "paper";
    string t = "title";

    if (isIsomorphic(s, t))
        cout << "Isomorphic";
    else
        cout << "Not isomorphic";

    return 0;
}