/*
   PROBLEM: Longest Common Prefix

Given an array of strings, find the longest
prefix (starting part) that is common to all
strings in the array.

Example:
Input:  ["flower", "flow", "flight"]
Output: "fl"

If no common prefix exists, return "" (empty string).

APPROACH

1. Assume the first string is the prefix.
   Example: prefix = "flower"

2. Compare this prefix with each string one-by-one.
   For every comparison:
   - Compare characters from the beginning
   - Count how many characters match (store this in j)

3. After each comparison, cut the prefix and keep
   only the matching part:
        prefix = prefix.substr(0, j);

4. If the prefix becomes empty at any point,
   return "" because no common prefix exists.

5. After checking all strings, return the final prefix.
-----------------------------------------
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string>&strs){
    // if the list is empty
    if(strs.empty()) return "";
    // start with first string as prefix
    string prefix = strs[0];
    // compare with all other strings
    for(int i=0; i<strs.size(); i++) {
        string current = strs[i];
        int j=0;
        // compare characters of prefix and current
        while(j<prefix.size() && j< current.length()){
            if(prefix[j]==current[j]){
                j++; //character match -> move to the next char
            }
            else{
                break; //character do not match ->stop the loop
            }
        }
        // shrink the prefix
        prefix = prefix.substr(0, j);
        // if prefix becomes empty, no need to continue
        if(prefix =="")
        return "";
    }
    return prefix;
}
int main(){
    vector<string>strs = {"flower", "flow", "flight"};
    cout<<longestCommonPrefix(strs);
    return 0;
}
