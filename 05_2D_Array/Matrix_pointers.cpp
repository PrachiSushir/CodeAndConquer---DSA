// #include<iostream>
// using namespace std;
// int main(){
//     int mat[4][4] = {{1,2,3,4},
//                      {5,6,7,8},
//                      {9,10,11,12},
//                      {13,14,15,16}};
// cout<<mat<<" = "<<&mat[0][0]<<endl;  
// cout<<mat+1<<" != "<<&mat[0][1]<<endl;    
// cout<<mat+1<<" = "<<&mat[1][0]<<endl;              
//     return 0;
// }

// ***Note*** : 2D Array name behaves as a row pointer 

// //// Passing matrix pointer to function
// As we already know int arr[] == int *arr 
//same int (*ptr[4]) == int mat[][4]   // we passes a row pointer

#include<iostream>
using namespace std;
void func(int mat[][4], int n, int m){

}
//--------------------// or --------------------------
void funct2(int (*mat)[4], int n, int m){

}
int main(){
    int mat[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
cout<<mat[2][2]<<" = "<<*(*(mat+2) + 2);

    return 0;
}
