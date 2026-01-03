
/*
# PROBLEM: Find K Closest Elements (LeetCode 658)
Given a sorted array arr, and integers k and x,
return k elements closest to x.

Rules:
1) Distance = |element - x|
2) If tie, choose smaller element
3) Output must be sorted

# APPROACH: Two Pointers / Sliding Window

- Array is already sorted
- Closest elements always form a continuous window
- Start with full array
- Remove the farther element from left or right
- Stop when window size becomes k

# TIME COMPLEXITY: O(n - k)
SPACE COMPLEXITY: O(1)

# APPLICATION OF LOGIC:

- Used in location-based apps like Google Maps or Uber to find the k nearest places or drivers.
- Data is already sorted by distance, so far locations are removed first.
- The system keeps shrinking results until only the closest k options remain.
- Helps show relevant, nearby results quickly without extra computation.

*/
// Logic:
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int low = 0;                  // left pointer
        int high = arr.size() - 1;    // right pointer

        // Shrink the window until only k elements remain
        while (high - low + 1 > k) {

            // Compare distances from x
            if (abs(arr[low] - x) > abs(arr[high] - x)) {
                low++;      // left element is farther
            } 
            else {
                high--;     // right element is farther OR tie case
            }
        }

        // Store the result window
        vector<int> result;
        for (int i = low; i <= high; i++) {
            result.push_back(arr[i]);
        }

        return result;
    }

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    vector<int> ans = findClosestElements(arr, k, x);

    cout << "K Closest Elements: ";
    for (int val : ans) {
        cout << val << " ";
    }

    return 0;
}
