/*
# PROBLEM STATEMENT:
You are given an array consisting only of 0s, 1s, and 2s.
Your task is to sort the array in ascending order without using
any built-in sorting function and in minimum time.
This problem is also known as "Sort Colors" (LeetCode Problem #75).

# APPROACH (DUTCH NATIONAL FLAG ALGORITHM):
This problem is solved using the Dutch National Flag Algorithm.

We use three pointers:
low  -> tracks the position for 0
mid  -> traverses the array
high -> tracks the position for 2

Working:
- If arr[mid] == 0:
  Swap arr[low] and arr[mid]
  Increment both low and mid

- If arr[mid] == 1:
  Just increment mid

- If arr[mid] == 2:
  Swap arr[mid] and arr[high]
  Decrement high

This ensures:
- All 0s move to the left
- All 2s move to the right
- All 1s remain in the middle

The array is sorted in a single traversal.

# TIME COMPLEXITY:
O(n) -> The array is traversed only once

# SPACE COMPLEXITY:
O(1) -> In-place sorting, no extra space used


# REAL-LIFE APPLICATIONS:
- Sorting priority levels (Low = 0, Medium = 1, High = 2)
- Traffic signal state management
- Categorizing limited data values
- Efficient classification problems

*/

// Logic: 

#include <iostream>
using namespace std;

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {  // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortColors(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
   