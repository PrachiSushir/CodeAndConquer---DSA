/*
# PROBLEM: Painter's Partition Problem
Given N boards and K painters, each painter can paint
only contiguous boards. Find the minimum time required
to paint all boards such that the maximum time taken by
any painter is minimized.

# APPROACH:
- Binary Search on Answer
- low  = max board length
- high = sum of all board lengths

# TIME COMPLEXITY:
O(N log(sum of board lengths))

# REAL LIFE APPLICATION:
- Workload distribution
- Task scheduling
- Resource allocation

*/
// LOGIC:

#include <iostream>
#include <vector>
using namespace std;

// Function to check if boards can be painted with given maxTime
bool isPossible(vector<int>& boards, int k, int maxTime) {
    int painters = 1;
    int currentSum = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (currentSum + boards[i] <= maxTime) {
            currentSum += boards[i];
        } else {
            painters++;
            currentSum = boards[i];

            if (painters > k)
                return false;
        }
    }
    return true;
}

int paintersPartition(vector<int>& boards, int k) {
    int low = 0, high = 0;

    for (int i = 0; i < boards.size(); i++) {
        low = max(low, boards[i]);
        high += boards[i];
    }

    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid)) {
            ans = mid;
            high = mid - 1;  // try to minimize
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;

    cout << "Minimum time to paint boards: "
         << paintersPartition(boards, k);

    return 0;
}