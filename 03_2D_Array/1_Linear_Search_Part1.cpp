// #include<iostream>
// using namespace std;
// bool linearSearch(int mat[][3],int rows,int cols,int key) {
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++) {
//             if(mat[i][j]==key) {
//                 return true;
//             }
//         }
//     } return false;
// }

// int main() {
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows=4;
//     int cols=3;
//     cout<<linearSearch(matrix,rows,cols,8)<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
pair<int,int>linearSearch(int mat[4][3], int row, int col,int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j]==key){
            return {i,j};
            }
        }
    }
    return {-1,-1};
}
 int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    int key = 8;

    pair<int,int>ans = linearSearch(mat, row, col, key);
    cout<<"at row:"<<ans.first<<" "<<"at col:"<<ans.second<<endl;
    return 0;
 }

// #include <iostream>
// using namespace std;

// pair<int, int> linearSearch(int mat[4][3], int row, int col, int key) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (mat[i][j] == key) {
//                 return {i, j};   // row, col found
//             }
//         }
//     }
//     return {-1, -1};  // key not found
// }

// int main() {
//     int mat[4][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12}
//     };

//     int key = 8;
//     pair<int,int> ans = linearSearch(mat, 4, 3, key);

//     if (ans.first != -1)
//         cout << "Found at Row: " << ans.first << " Col: " << ans.second;
//     else
//         cout << "Not Found";

//     return 0;
// }
