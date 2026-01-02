/*
# PROBLEM: K-diff Pairs in an Array

Given an integer array nums and an integer k,
return the number of UNIQUE pairs (i, j) such that:

nums[i] - nums[j] = k and i != j

# APPROACH (Sorting + Two Pointers)

1. If k is negative, return 0 because difference
   can never be negative.

2. Sort the array.
   Sorting helps to:
   - Use two pointers efficiently
   - Avoid counting duplicate pairs

3. Use two pointers:
   - i (left pointer)
   - j (right pointer, starts from i+1)

4. While i and j are within the array:
   - If nums[j] - nums[i] < k → move j forward
   - If nums[j] - nums[i] > k → move i forward
   - If nums[j] - nums[i] == k:
       • Valid pair found
       • Increase count
       • Move both pointers
       • Skip duplicate values to avoid repeat pairs

5. Return the final count.

# TIME & SPACE COMPLEXITY

Time Complexity:
- Sorting takes O(n log n)
- Two pointer traversal takes O(n)
- Overall Time Complexity = O(n log n)

# Space Complexity:
- O(1) (No extra data structures used)

# REAL LIFE APPLICATION
1. Finding product price pairs with a fixed price difference.
   Example:
   - Finding two products whose prices differ by ₹500.

2. Detecting sensor readings with a fixed threshold difference.
   Example:
   - Temperature sensors detecting abnormal variation.

3. Matching exam scores with a fixed score gap.
   Example:
   - Students whose marks differ by exactly 10.

4. Financial analysis:
   - Finding days where stock prices differ by a fixed value.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findKDiffPairs(vector<int>& nums, int k) {

    if (k < 0) return 0;   // Difference cannot be negative

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = 1;
    int count = 0;
    int n = nums.size();

    while (i < n && j < n) {

        if (i == j) {
            j++;
        }
        else if (nums[j] - nums[i] < k) {
            j++;
        }
        else if (nums[j] - nums[i] > k) {
            i++;
        }
        else {  // nums[j] - nums[i] == k
            count++;
            i++;
            j++;

            // Skip duplicates
            while (i < n && nums[i] == nums[i - 1]) {
                i++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;

    cout << "Number of k-diff pairs: "
         << findKDiffPairs(nums, k);

    return 0;
}