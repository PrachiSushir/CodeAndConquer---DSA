/*
SPOJ PROBLEM: EKO - Eko (Wood Cutting)

PROBLEM STATEMENT:
You are given N trees with different heights. A woodcutter cuts all trees at the
same height H. From each tree, the wood collected is the part above height H.
Your task is to find the maximum possible height H such that the total wood
collected is at least M.

APPROACH:
This is a Binary Search on Answer problem.

1. If we cut trees at a lower height, we get more wood.
2. If we cut trees at a higher height, we get less wood.
3. This creates a monotonic condition where valid heights come first, then invalid.
4. We binary search on the height H from 0 to max tree height.
5. For each mid height, calculate total wood collected.
6. If wood >= M, store mid as answer and try a higher height.
7. Otherwise, try a lower height.
8. The last valid height is the final answer.

ALGORITHM:
1. Read N and M.
2. Read heights of trees.
3. Set low = 0 and high = maximum tree height.
4. While low <= high:
   - mid = (low + high) / 2
   - Calculate wood collected at mid
   - If wood >= M:
        answer = mid
        low = mid + 1
     Else:
        high = mid - 1
5. Print answer.

TIME COMPLEXITY:
O(N log H)
Where:
N = number of trees
H = maximum height of trees

SPACE COMPLEXITY:
O(N)

REAL LIFE APPLICATION:
1. Wood cutting optimization
2. Resource allocation problems
3. Production planning with minimum requirements
4. Maximizing efficiency while meeting constraints
5. Industrial cutting and manufacturing processes

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canCollectWood(vector<long long>& trees, long long n, long long m, long long h) {
    long long wood = 0;
    for (int i = 0; i < n; i++) {
        if (trees[i] > h) {
            wood += trees[i] - h;
        }
    }
    return wood >= m;
}

int main() {
    long long n, m;
    cin >> n >> m;

    vector<long long> trees(n);
    for (int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    long long low = 0;
    long long high = *max_element(trees.begin(), trees.end());
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (canCollectWood(trees, n, m, mid)) {
            ans = mid;
            low = mid + 1;   // try higher cut
        } else {
            high = mid - 1;  // cut lower
        }
    }

    cout << ans << endl;
    return 0;
}
