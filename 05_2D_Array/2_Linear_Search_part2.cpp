// Returning the pair of row and column
 
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

