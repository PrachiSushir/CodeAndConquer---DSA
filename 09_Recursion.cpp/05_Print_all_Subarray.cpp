/*
# PROBLEM STATEMENT:
Given an integer array, print all possible contiguous subarrays using recursion.

# APPROACH (RECURSIVE):
Use recursion to fix the starting index.
For each starting index, recursively print subarrays by increasing the ending index.
Move to the next starting index recursively until all subarrays are printed.

# TIME COMPLEXITY:
O(n^3) because recursion replaces loops but total operations remain the same.

# REAL LIFE APPLICATION:
Useful when breaking a large continuous process into smaller ranges recursively,
such as checking all continuous time intervals or segments step-by-step.
*/
// LOGIC:

#include <iostream>
#include <vector>
using namespace std;

void printSubarray(vector<int>& arr, int start, int end) {
    if (start > end)
        return;

    cout << arr[start] << " ";
    printSubarray(arr, start + 1, end);
}

void allSubarrays(vector<int>& arr, int start, int end, int n) {
    if (start == n)
        return;

    if (end == n) {
        allSubarrays(arr, start + 1, start + 1, n);
        return;
    }

    printSubarray(arr, start, end);
    cout << endl;

    allSubarrays(arr, start, end + 1, n);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    allSubarrays(arr, 0, 0, n);
    return 0;
}
