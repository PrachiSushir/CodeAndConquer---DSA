
/*
# Problem Statement:
Given a 2D matrix of integers where each row is sorted in ascending order
from left to right and each column is sorted in ascending order from top to bottom,
write an efficient algorithm to determine whether a given target value exists in the matrix.

# Approach:
Start searching from the top-right corner of the matrix or the corner of matrix.
If the current element is equal to the target, return true.
If the target is smaller than the current element, move left (decrease column),
because all values below are larger.
If the target is greater than the current element, move down (increase row),
because all values to the left are smaller.
Continue this process until the target is found or the indices go out of bounds.

# Time Complexity:
O(m + n), where m is the number of rows and n is the number of columns.
At each step, either one row or one column is eliminated.

# Space Complexity:
O(1), as no extra space is used.

# Real-Life Application:
This logic can be used in searching data in a spreadsheet or database table
where records are sorted both row-wise and column-wise, such as searching
for a specific price in a product-price grid or locating a value in
sorted performance metrics.
*/
// LOGIC:

#include<iostream>
#include<vector>
using namespace std;
 bool SearchInMatrix(vector<vector<int>>& matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0;
    int col = n-1;

    while(row<m && col>=0){
        if(target == matrix[row][col]){
            return true;
        } else if(target < matrix[row][col]){
            col--;
        } else {
            row++;
        }
    }

return false;

 }
int main() {
    vector<vector<int>> matrix = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int target = 6;
    cout<<SearchInMatrix(matrix, target);
    return 0;
}