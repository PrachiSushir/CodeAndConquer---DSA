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
**INTUITION:**

- Both arrays are already sorted, and nums1 has extra space at the end.
- To avoid overwriting elements, we start merging from the back.
- Compare the largest remaining elements of both arrays.
- Place the larger element at the last empty position of nums1.
- Move pointers backward and repeat the process.
- Copy remaining elements of nums2 if any are left.

3. k-diff Pairs in an array(Leetcode 532):

**INTUITION:**

- We need to find UNIQUE number pairs whose difference is exactly k.
- Sorting the array helps bring equal and nearby values together.
- Using two pointers allows us to efficiently compare differences
without checking every possible pair.
- If the difference is too small, we move the right pointer        forward.
- If the difference is too large, we move the left pointer forward.
- When the difference matches k, we count the pair and skip duplicates.

4. Find k-Closest Element:

**INTUITION:**
- The array is already sorted
- Closest elements to x always lie together
- We use two pointers to define a window
- Compare distance of leftmost and rightmost elements
- Remove the farther one
- Stop when only k elements remain

5. Exponential search and unbounded binary search:

**INTUITION:**

- The array is sorted but its size is unknown, so we cannot directly apply binary search.
- We first expand the search range exponentially (1, 2, 4, 8, ...) until the target is crossed.
- Because the array is sorted, once an element larger than the target is found, the target must lie within the last valid range. - We then apply binary search in this range to find
the element efficiently in logarithmic time.

6. Painters partition problem:

**INTUITION:**

- A board cannot be split, so the minimum possible time is the length of the largest board.
- If one painter paints all boards, the maximum time is the sum of all board lengths.
- Hence, the answer lies between these two values.
- We apply binary search on time, not on boards.
- For each guessed time, we check if painters can paint boards contiguously without exceeding it.
- The smallest feasible time is the final answer.

7. Aggressive cow:

**INTUITION:**

- We want to place cows in stalls so that the minimum distance between any two cows is maximum.
- Instead of directly finding the maximum distance, we guess a - distance and check if all cows can be placed with at least that gap.
- If placement is possible, we try a bigger distance; otherwise, we reduce the distance.
- This guessing and checking is done using binary search, with greedy placement to validate each guess.

8. Book Allocation problem:

**INTUITION:**
- We want to minimize the maximum pages given to any student.
- Answer lies between:
    - 0 (minimum)
    - sum of all pages (maximum)
- Use Binary Search on this range.
- For each mid, check:
    - Can we distribute books among m students without exceeding mid pages per student?

- If yes → try smaller value
- If no → increase the limit

9. EKO-SPOJ:

**INTUITION:**

- Cutting trees at a lower height gives more wood, and cutting at a higher height gives less wood.
- We want to cut as high as possible but still collect at least M wood.
- For any cutting height, we can check how much wood we get.
- If the wood is enough, we try cutting higher to save more tree.
- If the wood is not enough, we cut lower to get more wood.
- Because this behavior is monotonic, binary search efficiently finds the answer.

10. PRATA-SPOJ:

**INTUITION:**

- Instead of trying every possible time, we guess a time and check if it works.
- If cooks can finish the work in that time, we try to reduce it.
- If they can’t, we increase the time.
- By repeatedly narrowing the range, we quickly find the minimum required time.


