# Arrays

This folder contains array problems solved in C++.

## Problems Covered
1. Array Basics
2. Maximum Subarray Sum (Kadane’s Algorithm)
3. Majority Element (Moore’s Voting Algorithm)
4. Valid anagram
5. Largest Number
6. Minimum time difference
7. Number of laser beams in a bank 

8. Two Sum problem(leetcode 1):

**INTUITION:**

- Instead of checking every possible pair, we remember the numbers we have already seen.
- For each element, we calculate what number is needed to reach the target.
- If that required number was seen earlier, we immediately get the answer.
- A hash map helps us store and search numbers in constant time, making the solution fast.
- This avoids the slow brute-force approach of checking all pairs.


## Language
- C++