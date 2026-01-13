/*
# Problem Statement: Search in a 2D Matrix

You are given a 2D matrix with the following properties:
1. Each row is sorted in ascending order.
2. The first element of each row is greater than the last element of the previous row.

Given an integer target, return true if the target exists in the matrix,
otherwise return false.

# Approach:
1. Since the matrix is row-wise sorted and rows do not overlap,
   we can apply binary search.
2. First, perform binary search on rows to find the row
   in which the target may exist.
3. Once the correct row is identified, perform binary search
   on that row.
4. If the element is found, return true; otherwise return false.


# Time Complexity:
- O(log m + log n)
  where m = number of rows, n = number of columns.

# Space Complexity:
- O(1) (constant extra space)

# Real Life Application:
This approach is used in database indexing systems where data is stored
in sorted blocks. First, the correct block is found, then the exact record
is searched efficiently. It is also used in inventory systems,
spreadsheet lookups, and search engines.

*/

// LOGIC:

#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>>& matrix,int target, int row){
    int n = matrix[0].size();
    int st =0 , end = n-1;

    while(st<=end){
        int mid = st +(end - st)/2;
        if(target == matrix[row][mid]){
            return true;
        } else if(target > matrix[row][mid]){
            st = mid+1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}
  bool searchMatrix(vector<vector<int>>& matrix, int target){
    // Binary Search on total rows
    int m = matrix.size(), n = matrix[0].size();

    int startRow = 0, endRow = m-1;
    while(startRow <=endRow) {
        int midRow = startRow + (endRow-startRow)/2;

        if(target>= matrix[midRow][0] && target<=matrix[midRow][n-1]) {
             return searchInRow(matrix, target, midRow);
        } else if(target>=matrix[midRow][n-1]){
            // down
            startRow = midRow+1;
        } else {
            endRow = midRow-1;
        }
    }
    return false;
  }

  int main(){
    vector<vector<int>>matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
  cout<<searchMatrix(matrix, target);
    return 0;
  }