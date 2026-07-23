////Question 3: Write a program to Find Transpose of a Matrix.
//What is Transpose? Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 matrix,
// Matrix:
//  a11 a12 a13
//  a21 a22 a23 
// Transposed Matrix:
//  a11 a21 a12 
//  a22 a13 a23

// #include<iostream>
// using namespace std;
// void transposeOfMatrix(int matrix[2][3], int n, int m){
//   int transpose[m][n]={{0}};
//   for(int i = 0; i<n; i++){
//     for(int j =0; j<m; j++){
//     transpose[j][i]=matrix[i][j];
//     }
   
//   }
//   for(int i = 0; i<m; i++){
//     for(int j = 0; j<n; j++){
//         cout<<transpose[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// }
// int main(){
//     int matrix[2][3] = {{2,3,7},{5,6,7}};
//     int n = 2;
//     int m = 3;
//     transposeOfMatrix(matrix, n, m);
//     return 0;
// }
