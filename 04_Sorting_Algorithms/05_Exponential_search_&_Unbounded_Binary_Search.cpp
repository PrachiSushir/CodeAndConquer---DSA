/*
# PROBLEM STATEMENT:
Given a sorted array of integers whose size is unknown
(or conceptually infinite) and a target element x,
determine whether x exists in the array.
Return the index of x if found, otherwise return -1.

# ALGORITHM (Exponential Search + Binary Search):

1. Since the array is sorted but its size is unknown,
   we cannot directly apply binary search.

2. Start with a small search range:
      low = 0
      high = 1

3. Expand the range exponentially:
   While arr[high] < x:
      low = high
      high = high * 2

   This step finds a valid range [low, high]
   where the target element may exist.

4. Apply Binary Search in the range [low, high]:
   a) Find mid index
   b) Compare arr[mid] with x
   c) Eliminate half of the range accordingly

5. If x is found, return its index.
   If the search space becomes invalid, return -1.

# TIME COMPLEXITY:
- Range Expansion (Exponential Search): O(log k)
- Binary Search on the found range:   O(log k)
- Overall Time Complexity:             O(log k)

(where k is the index of the target element)


# REAL-WORLD APPLICATION OF THIS LOGIC:
1. Searching data in a large sorted file where total
   records are not known in advance.
2. Querying elements in a data stream that is sorted.
3. Searching values in an infinite or dynamically
   growing database.
4. Finding log entries in sorted server logs.
5. Searching in online APIs that return sorted data
   but do not expose total size.

KEY INSIGHT:
This approach works efficiently only because the array
is sorted. Sorting allows safe elimination of large
portions of data and enables logarithmic searching.
*/
#include <iostream>
using namespace std;

// Binary Search helper function
int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Function for searching in infinite/unknown size array
int exponentialSearch(int arr[], int x) {
    // If first element itself is the target
    if (arr[0] == x)
        return 0;

    int low = 0;
    int high = 1;

    // Find range where x may exist
    while (arr[high] < x) {
        low = high;
        high = high * 2;
    }

    // Apply binary search in found range
    return binarySearch(arr, low, high, x);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 14;

    int index = exponentialSearch(arr, x);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
