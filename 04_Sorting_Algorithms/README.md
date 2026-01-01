# Sorting Algorithm
## Problems covered

1. Sort an array of 0s, 1s & 2s

**INTUITION:**

- The array contains only three values: 0, 1, and 2, so full sorting is unnecessary.
- We keep three pointers to track where 0s, 1s, and 2s should go.
- 0s are placed at the beginning, 2s at the end, and 1s stay in the middle.
- By checking each element once and swapping it to its correct position, the unsorted part keeps shrinking.
- Thus, the array is sorted in a single pass using constant space.

2. Merge 2 sorted arrays(Leetcode 88):
- Both arrays are already sorted, and nums1 has extra space at the end.
- To avoid overwriting elements, we start merging from the back.
- Compare the largest remaining elements of both arrays.
- Place the larger element at the last empty position of nums1.
- Move pointers backward and repeat the process.
- Copy remaining elements of nums2 if any are left.