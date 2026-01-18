/*
# Leetcode 287: Find the Duplicate Number

# Problem Statement:
You are given an array nums containing n + 1 integers where each integer is in the range [1, n].
There is only one repeated number, return this repeated number.
You must solve the problem WITHOUT modifying the array and using only constant extra space.

# Example:
Input: nums = [1,3,4,2,2]
Output: 2

#Approach (Apna College Method - Floyd Cycle Detection / Tortoise-Hare):
- Consider array as a linked list:
    from index i -> next index = nums[i]
- Since one number is repeated, two indices will point to the same next index.
  This creates a cycle in this "linked list".
- The duplicate number is the entry point of that cycle.

Steps:
1) Detect cycle using slow & fast pointers:
   slow moves 1 step: slow = nums[slow]
   fast moves 2 steps: fast = nums[nums[fast]]
   They will meet inside the cycle.

2) Find the entry of the cycle:
   Reset slow to nums[0] and move both slow and fast one step at a time.
   The meeting point will be the duplicate number.

Time Complexity: O(n)
Space Complexity: O(1)
*/
// Logic:

#include <iostream>
#include <vector>
using namespace std;

    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Step 1: Detect cycle
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Step 2: Find entry point of cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow; // duplicate number
    }

int main() {
    vector<int> nums = {3,1,3,4,2};
    cout << "Duplicate Number: " << findDuplicate(nums) << endl;

    return 0;
}
