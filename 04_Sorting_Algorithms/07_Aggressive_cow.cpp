/*
# AGGRESSIVE COWS PROBLEM

# PROBLEM STATEMENT:
You are given N stalls placed at different positions.
You have C cows and want to place them in the stalls.
The goal is to place the cows such that the minimum
distance between any two cows is as large as possible.

# APPROACH (Binary Search on Answer):
1. Sort the stall positions.
2. The minimum possible distance = 1
3. The maximum possible distance =
   (last stall position - first stall position)
4. Apply Binary Search on this distance range.
5. For a mid distance:
   - Check if it is possible to place all cows
     such that each cow is at least 'mid' distance apart.
6. If possible:
   - Store the answer
   - Try for a larger distance
7. If not possible:
   - Reduce the distance

# FEASIBILITY CHECK LOGIC:
- Place the first cow in the first stall
- For each next stall:
  - If distance from last placed cow >= mid
    place the cow
- If all cows are placed successfully → return true

# TIME COMPLEXITY:
Sorting stalls:        O(N log N)
Binary Search:         O(log(maxDistance))
Feasibility check:     O(N)

Overall Time Complexity:
O(N log N)

# SPACE COMPLEXITY:
O(1) extra space (ignoring input storage)

# REAL LIFE APPLICATION OF THIS LOGIC:
1. Placing Wi-Fi routers to maximize signal coverage
2. Seating people to maintain maximum social distancing
3. Allocating servers in data centers to reduce interference
4. Placing charging stations or ATMs optimally
5. Factory machine placement to reduce vibration impact

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to check if cows can be placed with minimum distance 'dist'
bool canPlaceCows(vector<int>& stalls, int cows, int dist) {
    int count = 1;                 // First cow placed
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i];
        }
        if (count == cows)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, cows, mid)) {
            ans = mid;       // valid answer
            low = mid + 1;  // try bigger distance
        } else {
            high = mid - 1; // reduce distance
        }
    }
    return ans;
}

int main() {
    int n, cows;
    cin >> n >> cows;

    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    cout << aggressiveCows(stalls, cows);
    return 0;
}
