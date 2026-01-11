#include<iostream>
#include<climits>
using namespace std;
 int maxColSum(int mat[3][3], int row, int col){
     int maxSum = INT_MIN;
     for(int j=0; j<col; j++){
        int colSum =0;
        for(int i=0; i<row; i++){
              colSum +=mat[i][j];
        }
        maxSum = max(maxSum, colSum);

     }
     return maxSum;
 }
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3; 
    int col = 3;
    cout<<maxColSum(mat, row, col);
    return 0;
}