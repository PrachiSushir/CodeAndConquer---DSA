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

9. Find the duplicate Number(Leetcode 287):

- Think of the array as a linked list where each index points to nums[index].
- Because one number is repeated, two indices point to the same value, creating a cycle.
- The duplicate number is the entry point of this cycle.
- Floyd’s Cycle Detection algorithm helps find this entry point efficiently.



## Language
- C++