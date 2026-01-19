/*
# PROBLEM STATEMENT:
Given an integer array nums, return all unique triplets [nums[i], nums[j], nums[k]]
such that i != j != k and nums[i] + nums[j] + nums[k] = 0.
The solution must not contain duplicate triplets.

#INTUITION:
Sort the array and fix one element at a time.
For the remaining part, use the two-pointer technique to find pairs
whose sum equals the negative of the fixed element.
Sorting helps eliminate duplicates efficiently.

# APPROACH (OPTIMIZED):
1. Sort the array.
2. Fix one element nums[i] in a loop.
3. Use two pointers (left = i+1, right = n-1).
4. If sum == 0 → store triplet and skip duplicates.
5. If sum < 0 → move left pointer.
6. If sum > 0 → move right pointer.
7. Continue until left < right.

# TIME COMPLEXITY:
O(n^2)

# SPACE COMPLEXITY:
O(1) (excluding output array)

# REAL LIFE APPLICATION:
Used in financial analysis to find balanced transactions,
data analytics for detecting neutral combinations,
and optimization problems involving multiple constraints.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});

                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    for (auto triplet : result) {
        cout << "[ ";
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}
