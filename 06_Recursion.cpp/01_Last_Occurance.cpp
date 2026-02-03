
/*
PROBLEM STATEMENT:
Given an array of integers and a value x, find the last index at which x appears
in the array using recursion. If x is not present, return -1.

APPROACH:
1. Start recursion from index 0.
2. First, recursively search in the remaining part of the array.
3. If the element is found at a later index, return that index.
4. If not found later, check the current index.
5. If the current element equals x, return the current index; otherwise return -1.

TIME COMPLEXITY:
Time Complexity: O(n)
Space Complexity: O(n) due to recursive call stack.

REAL LIFE APPLICATION OF THE LOGIC:
This logic is used when we need the most recent occurrence of an item, such as:
- Finding the latest login of a user from login records.
- Getting the most recent transaction of a particular value.
- Finding the last update made to a file in version history.

*/
// LOGIC:
#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int i, int x) {
    // Base case
    if (i == n)
        return -1;

    // Recursive call
    int ans = lastOccurrence(arr, n, i + 1, x);

    // If found later, return it
    if (ans != -1)
        return ans;

    // Else check current index
    if (arr[i] == x)
        return i;

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int n = 5;
    int x = 2;

    cout << lastOccurrence(arr, n, 0, x);
    return 0;
}
