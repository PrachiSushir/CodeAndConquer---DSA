// // //===========================For ascending order===========================================
#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;  // //Optimization
       for(int j = 0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
             isSwap=true;
           
        }

       }
       if(!isSwap){
        // //array is already sorted
         printArr(arr, n);
        return;
       }
    }
   

}
int main(){
    int arr[5]={5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);


    return 0;
}

// //TC :- O(n^2)

// //=================For descending order========================
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void bubbleSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//        for(int j = 0; j<n-i-1; j++){
//         if(arr[j]<arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }

//        }
//     }

//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<", ";
//     }
// }
// int main(){
//     int arr[5]={5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);
//     bubbleSort(arr, n);
//     return 0;
// }

