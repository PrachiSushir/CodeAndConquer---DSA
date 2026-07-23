////Question 2: Print out the sum of the numbers in the second row of the “nums” array. 
// //Example: Input-int nums[][] = {{1,4,9},{11,4,3},{2,2,3}};
// // Output-18

// #include<iostream>
// using namespace std;
// int printRowSum(int mat[3][3], int n, int m){
//     int row = 1;
//     int rowSum = 0;
//     for(int col = 0; col<m; col++){
//         rowSum +=mat[row][col];
//     }
//     return rowSum;

// }
// int main(){
//     int mat[3][3]={{1,4,9},{11,4,3},{2,2,3}};
//     int n = 3;
//     int m = 3;
//     cout<<printRowSum(mat,n,m);
//     return 0;
// }