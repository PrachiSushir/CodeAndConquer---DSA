/*
# PROBLEM STATEMENT (LeetCode – Combination Sum):
You are given an array of distinct integers and a target value.
Return all unique combinations where the chosen numbers sum to the target.
You may use the same number an unlimited number of times.
The order of combinations does not matter.


# APPROACH (Backtracking / Recursion):
We use recursion to explore all possible choices.
At each index, we have two options:
1) Pick the current element and reduce the target (stay at same index to allow reuse).
2) Skip the current element and move to the next index.
If target becomes 0, we store the current combination.
If target becomes negative or index goes out of bounds, we stop that path.

# TIME COMPLEXITY:
Exponential in nature → O(2^T) (approximately),
where T is the target value.
This happens because for each element, we either pick or skip it recursively.

# SPACE COMPLEXITY:
O(T) for recursion stack and temporary combination vector.


REAL LIFE APPLICATION:
This logic is similar to:
- Finding ways to pay a bill using unlimited coins
- Selecting products to reach a fixed budget
- Creating combinations of ingredients to reach a target quantity
- Resource allocation problems where repetition is allowed
*/

// LOGIC:

#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& arr, int target,
           vector<vector<int>>& ans,
           vector<int>& temp,
           size_t idx) {

    // Valid combination found
    if (target == 0) {
        ans.push_back(temp);
        return;
    }

    // Out of bounds OR invalid sum
    if (idx == arr.size() || target < 0) {
        return;
    }

    // PICK current element (can pick again)
    temp.push_back(arr[idx]);
    solve(arr, target - arr[idx], ans, temp, idx);
    temp.pop_back();

    // SKIP current element
    solve(arr, target, ans, temp, idx + 1);
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> temp;

    solve(arr, target, ans, temp, 0);
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(arr, target);

    cout << "Combinations:\n";
    for (auto &v : result) {
        cout << "[ ";
        for (int x : v) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
