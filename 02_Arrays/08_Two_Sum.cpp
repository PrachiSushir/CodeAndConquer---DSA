/* 
# Problem Statement:
Given an array of integers arr and an integer target, find the indices of two
distinct elements such that their sum is equal to the target.
Each input will have exactly one solution, and the same element cannot be used twice.

# Approach:
Use an unordered_map to store elements with their indices while traversing the array.
For each element, calculate the required value as (target - current element).
If the required value already exists in the map, return the stored index and the
current index. Otherwise, store the current element with its index and continue.

# Time Complexity:
O(n) — Each element is visited once and hash map operations take constant time.

# Space Complexity:
O(n) — Extra space is used by the unordered_map to store elements.

# Real Life Application:
This logic is used in shopping applications to find two items whose prices match a
given budget, in banking systems to detect two transactions that sum to a specific
amount, and in data analysis to efficiently find value pairs meeting a target constraint.
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>twoSum(vector<int>& arr, int target){
    unordered_map<int,int>m;
    vector<int>ans;
    int n = arr.size();
    for(int i =0; i<n; i++){
        int first = arr[i];
        int second = target - first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;

        }
        m[first] = i;
    }
    return ans;
}
int main(){
 vector<int>arr = {2,7,11,15};
 int target = 9;
 vector<int>result = (twoSum(arr,target));
 for(int idx : result){
    cout<<idx<<" ";
 }
    return 0;
}