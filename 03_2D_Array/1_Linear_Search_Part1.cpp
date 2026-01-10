/*What is Linear Search in 2D Array?
In linear search, we check every element one by one until we find the target.
In 2D array, elements are stored in rows and columns

# Algorithm :
- Suppose target = x
- Start from first row (0)
- Start from first column (0)
- Compare each element with x
- If found → return position (row, col)
- If not found till end → return Not Found*/


#include<iostream>
using namespace std;
bool linearSearch(int mat[][3],int rows,int cols,int key) {
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++) {
            if(mat[i][j]==key) {
                return true;
            }
        }
    } return false;
}

int main() {
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    cout<<linearSearch(matrix,rows,cols,8)<<endl;

    return 0;
}
