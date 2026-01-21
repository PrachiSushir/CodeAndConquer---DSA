/*

SUBARRAY SUM EQUALS K 

# PROBLEM STATEMENT:
Given an integer array nums and an integer k, return the total number of
continuous subarrays whose sum equals to k.

A subarray is a contiguous (continuous) part of an array.

# APPROACH (Most Optimized):
Prefix Sum + HashMap (Frequency Map)

# STEPS:
1) Use unordered_map mp to store frequency of prefix sums.
2) Initialize mp[0] = 1 (to handle subarrays starting from index 0).
3) Traverse array:
   - Add current element to prefixSum
   - If (prefixSum - k) exists in mp, add its frequency to answer
   - Store current prefixSum in mp

# TIME COMPLEXITY:
Time  : O(n)   (single traversal)
Space : O(n)   (hashmap storage)

3 REAL LIFE APPLICATION:
1) Finance/Stock Analysis:
   Count number of continuous time periods where profit/loss equals k.
2) Expense Tracking:
   Find how many continuous day ranges have total expense exactly k.
3) Sensor/IoT Data:
   Detect number of continuous time windows where total sensor reading hits a target k.
4) Web Analytics:
   Count continuous sessions where user activity sum equals k.

*/

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;  // prefixSum -> frequency
    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for(int x : nums) {
        prefixSum += x;

        if(mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }

        mp[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << subarraySum(nums, k) << endl; // Output: 2
    return 0;
}