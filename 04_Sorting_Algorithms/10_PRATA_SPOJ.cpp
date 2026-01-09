/*

# PROBLEM STATEMENT

A restaurant has L cooks, each with a different rank.
A cook with rank R takes:
R minutes to cook 1st prata,
2R minutes to cook 2nd prata,
3R minutes to cook 3rd prata, and so on.

You are given:
P → number of pratas required
L → number of cooks
R[i] → rank of each cook

Your task is to find the minimum time required to cook at least P pratas.

# APPROACH (Binary Search on Answer)

1. The minimum time can be 0, and the maximum time occurs when the fastest cook
   (minimum rank) makes all P pratas alone.

2. We apply Binary Search on time.
   - For a given time (mid), check if all cooks together can make at least P pratas.

3. For each cook, calculate how many pratas they can make within 'mid' time
   using the formula:
       R * k * (k + 1) / 2 ≤ time

4. Sum pratas from all cooks.
   - If total pratas ≥ P → try smaller time
   - Else → increase time

5. The smallest valid time is the answer.


# TIME COMPLEXITY

For each test case:
Binary Search on time → O(log(maxTime))
For each cook, Binary Search on pratas → O(log P)

Total Complexity:
O(L * logP * log(maxTime))

# SPACE COMPLEXITY


O(L) — to store ranks of cooks

REAL LIFE APPLICATION

This logic is used in real-life scheduling and production problems such as:
- Minimizing time in a factory where machines have different speeds
- Task allocation among workers to finish work as early as possible
- Cooking or manufacturing pipelines with parallel workers
- Load balancing in distributed systems
- Determining minimum time to complete jobs using multiple processors
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMake(int P, vector<int>& ranks, long long time) {
    long long pratas = 0;

    for (int r : ranks) {
        // Solve r * k * (k + 1) / 2 <= time
        // k = max pratas a cook can make
        long long low = 0, high = 1e5;
        long long maxK = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long requiredTime = r * mid * (mid + 1) / 2;

            if (requiredTime <= time) {
                maxK = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        pratas += maxK;
        if (pratas >= P) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, L;
        cin >> P >> L;

        vector<int> ranks(L);
        for (int i = 0; i < L; i++)
            cin >> ranks[i];

        int minRank = *min_element(ranks.begin(), ranks.end());

        long long low = 0;
        long long high = (long long)minRank * P * (P + 1) / 2;
        long long ans = high;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (canMake(P, ranks, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
