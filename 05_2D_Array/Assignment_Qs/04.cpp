#include<iostream>
using namespace std;
void conversionIn2D(int arr[], int rows, int cols, int size){
 if(size!= rows*cols){
   cout<<"Invalid size";
    return;
 }
 int matrix[2][2] = {{0}};
 int k = 0;
 for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
       matrix[i][j] = arr[k];
       k++;
    }
 }
 for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
 }

} 
int main(){
    int arr[] = {1,2,3,4,5};
    int rows = 2;
    int cols = 2;
    int size = sizeof(arr)/sizeof(int);
    conversionIn2D(arr,rows,cols,size); 
    return 0;
}