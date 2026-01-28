/*
# HOUSE ROBBER PROBLEM (USING RECURSION)
# Problem Statement:
You are a robber planning to rob houses along a street.
Each house contains a certain amount of money.
You cannot rob two adjacent houses because the security
system will alert the police.

Given an array of integers where each element represents
the money in a house, find the maximum amount of money
you can rob without robbing two adjacent houses.

# Approach (Recursive Logic):
At every house (index i), we have two choices:

1. Rob the current house:
   - Take the money at current index
   - Move to index i + 2 (skip adjacent house)

2. Skip the current house:
   - Do not take the money
   - Move to index i + 1

We recursively calculate both choices and return the
maximum of the two.

Base Case:
If the index goes beyond the last house, return 0.

Code Implementation (C++ using Recursion):
------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>   // for max
using namespace std;

int robRecursive(vector<int>& nums, int index) {
    // Base case: index out of bounds
    if (index >= (int)nums.size())
        return 0;

    // Choice 1: Rob current house
    int rob = nums[index] + robRecursive(nums, index + 2);

    // Choice 2: Skip current house
    int skip = robRecursive(nums, index + 1);

    // Return the better choice
    return max(rob, skip);
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};

    cout << "Maximum money robbed: "
         << robRecursive(nums, 0) << endl;

    return 0;
}
