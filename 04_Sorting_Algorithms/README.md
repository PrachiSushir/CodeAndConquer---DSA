# Sorting Algorithm
## Problems covered

1. Sort an array of 0s, 1s & 2s

**INTUITION:**

- The array contains only three values: 0, 1, and 2, so full sorting is unnecessary.
- We keep three pointers to track where 0s, 1s, and 2s should go.
- 0s are placed at the beginning, 2s at the end, and 1s stay in the middle.
- By checking each element once and swapping it to its correct position, the unsorted part keeps shrinking.
- Thus, the array is sorted in a single pass using constant space.