/*

# PROBLEM: 4Sum (Leetcode 18)

# Problem Statement:
Given an integer array nums and an integer target, return all the unique quadruplets
[nums[a], nums[b], nums[c], nums[d]] such that:

1) a, b, c, d are all distinct indices
2) nums[a] + nums[b] + nums[c] + nums[d] == target
3) No duplicate quadruplets should be present in the answer.

# APPROACH (Optimized Apna College Method):

1) Sort the array.
2) Loop i from 0 to n-1:
   - Skip duplicate values for i
3) Loop j from i+1 to n-1:
   - Skip duplicate values for j
4) Now for remaining two numbers:
   - low = j+1
   - high = n-1
   Use two pointers:
   - if sum == target -> store quadruplet and move both pointers
   - if sum < target -> low++
   - if sum > target -> high--
5) Skip duplicates for low and high to avoid repeated quadruplets.

# TIME COMPLEXITY:

Sorting: O(n log n)
Two loops + two pointers: O(n^3)
# Total Time: O(n^3)

# SPACE COMPLEXITY:

O(1) extra space (excluding answer storage)


# REAL LIFE APPLICATION:

1) Finance / Budget Planning:
   Finding 4 items (investments/products/expenses) whose total cost equals a fixed budget.

2) Shopping Combination Problem:
   Selecting 4 products such that their total price matches a gift card value.

3) Data Analytics:
   Finding 4 values in a dataset that together satisfy a required total (target)
   like error correction, balancing, or transaction matching.

# WHY THIS WORKS (Logic):

After sorting:
- If sum is too small, increase low to get bigger sum
- If sum is too big, decrease high to get smaller sum
This is possible only due to sorted order.
Also duplicates are skipped to ensure unique quadruplets.

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue; // skip duplicates for i

        for(int j = i+1; j < n; j++) {
            if(j > i+1 && nums[j] == nums[j-1]) continue; // skip duplicates for j

            int low = j+1, high = n-1;

            while(low < high) {
                long long sum = (long long)nums[i] + nums[j] + nums[low] + nums[high];

                if(sum == target) {
                    ans.push_back({nums[i], nums[j], nums[low], nums[high]});
                    low++;
                    high--;

                    // skip duplicates for low
                    while(low < high && nums[low] == nums[low-1]) low++;

                    // skip duplicates for high
                    while(low < high && nums[high] == nums[high+1]) high--;
                }
                else if(sum < target) {
                    low++;
                }
                else {
                    high--;
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = fourSum(nums, target);

    for(auto quad : result) {
        for(int x : quad) cout << x << " ";
        cout << endl;
    }

    return 0;
}