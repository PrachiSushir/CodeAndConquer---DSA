
/*
# Problem Statement:
Given a 2D matrix of size m × n, return all elements of the matrix in spiral order.
Spiral order means traversing the matrix starting from the top-left corner,
moving right, then down, then left, then up, and repeating this process for the
inner sub-matrix until all elements are visited.

# Approach:
We use four boundaries to represent the current layer of the matrix:
starting row (srow), ending row (erow), starting column (scol), and ending column (ecol).
In each iteration:
1. Traverse the top row from left to right.
2. Traverse the right column from top to bottom.
3. Traverse the bottom row from right to left (if not already traversed).
4. Traverse the left column from bottom to top (if not already traversed).
After completing one layer, shrink the boundaries inward and repeat until all
elements are covered.

# Time Complexity:
O(m × n), where m is the number of rows and n is the number of columns,
since each element of the matrix is visited exactly once.

# Space Complexity:
O(m × n), used to store the spiral order traversal in the result vector.

# Real Life Application of the Logic:
This spiral traversal logic is useful in scenarios such as:
- Displaying images or data layer by layer from the outer boundary to the center.
- Printing seating arrangements or layouts in a spiral pattern.
- Traversing matrices in graphics, games, or simulations where boundary-based
  processing is required.
- Reading data from sensors arranged in grid form in a systematic circular manner.
*/
#include<iostream>
#include<vector>
using namespace std;
 vector<int>spiralOrder(vector<vector<int>>&matrix){
    vector<int>ans;
    int m = matrix.size();
    int n = matrix[0].size();

    int srow = 0;
    int scol = 0;
    int erow = m-1;
    int ecol = n-1;
 while(srow<=erow && scol<=ecol){
    // top
    for(int j=scol; j<=ecol; j++){
        ans.push_back(matrix[srow][j]);
    }
    // right
    for(int i=srow+1;i<=erow;i++){
        ans.push_back(matrix[i][ecol]);
    }
    // bottom 
    for(int j=ecol-1; j>=scol; j--){
        if(srow==erow){
            break;
        }
        ans.push_back(matrix[erow][j]);
    }
    // left
    for(int i=erow-1; i>srow;i--){
        if(scol==ecol){
            break;
        }
        
        ans.push_back(matrix[i][scol]);
    }
    srow++, erow--, scol++, ecol--;
 }
return ans;
 }
int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int>result = spiralOrder(matrix);
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}