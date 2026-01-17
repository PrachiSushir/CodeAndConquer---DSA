/* 
# PROBLEM STATEMENT:
You are given an n x n grid containing numbers from 1 to n².
Exactly one number is repeated twice and one number is missing.
Your task is to find and return:
1) The repeated number
2) The missing number


# APPROACH:
1. Use an unordered_set to track numbers already seen.
2. Traverse the entire grid:
   - Add each value to actualSum.
   - If a value already exists in the set, it is the repeated number.
3. Calculate the expected sum of numbers from 1 to n² using the formula:
   expectedSum = (n² * (n² + 1)) / 2
4. Use the formula:
   missing = expectedSum + repeated - actualSum
5. Store and return {repeated, missing}.


# INTUITION:
If one number is repeated and one is missing, the total sum of the grid
will differ from the expected sum.
The repeated number adds extra value, while the missing number removes value.
By knowing the repeated number and comparing sums, we can easily compute
the missing number.


# TIME COMPLEXITY:
O(n²)
- We traverse the grid once.

# SPACE COMPLEXITY:
O(n²)
- Due to the unordered_set storing all grid values.


# REAL LIFE APPLICATION:
This logic can be used in:
- Detecting duplicate and missing roll numbers in exam records
- Finding missing or repeated product IDs in inventory systems
- Data validation in databases where unique IDs are required

*/
// Logic:

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int>findMissingAndRepeatedValues(vector<vector<int>>grid) {
    vector<int>ans;
    unordered_set<int>s;
    int n = grid.size();
    int a,b;
 int actualSum = 0, expectedSum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum +=grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
                
            }
            s.insert(grid[i][j]);
        }
    }
    expectedSum = (n*n) * (n*n+1)/2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);
    return ans;
}
int main(){
    // vector<vector<int>>grid;
     vector<vector<int>> grid = {
        {1, 2},
        {2, 4}
    };

    vector<int> result = findMissingAndRepeatedValues(grid);
    cout << "Repeated: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
    

    return 0;
}