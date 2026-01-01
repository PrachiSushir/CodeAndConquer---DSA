/*
# PROBLEM STATEMENT:
Given two sorted arrays arr1 and arr2 of sizes n and m,
merge them into a single sorted array.

# APPROACH (Two Pointer Technique):
1. Use two pointers i and j for arr1 and arr2.
2. Compare arr1[i] and arr2[j].
3. Put the smaller element into the result array.
4. Move the pointer of the array whose element was used.
5. After one array is finished, copy the remaining elements
   of the other array.

# TIME COMPLEXITY:
O(n + m)

# SPACE COMPLEXITY:
O(n + m)

# REAL LIFE APPLICATION:
• Merging two sorted student lists by roll number
• Combining sorted transaction logs
• Used internally in Merge Sort algorithm
*/

// Logic:
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n = 4;
    int m = 4;

    int merged[n + m];

    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < m) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    cout << "Merged Sorted Array: ";
    for (int x = 0; x < n + m; x++) {
        cout << merged[x] << " ";
    }

    return 0;
}