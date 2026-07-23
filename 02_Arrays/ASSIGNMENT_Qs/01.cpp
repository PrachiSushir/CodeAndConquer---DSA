// //===============================Leetcode 217. Contains Duplicate=====================================

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool numAppearance(int arr[], int n){
    
//    sort(arr, arr+n);
//  for(int i = 1; i<n; i++){
//     // if(arr[i]==arr[i+1]){

//     if(arr[i-1]==arr[i]){
//         return true;
//     }
  
//  }

//  return false;
// }


// int main(){
//     int arr[] = {1,2,3,1};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<numAppearance(arr, n);
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
bool numAppearance(int arr[], int n){
   sort(arr, arr+n);
 for(int i = 0; i<n-1; i++){
    if(arr[i]==arr[i+1]){
        return true;
    } 
}
return false;
}

int main(){
    int arr[] = {1,2,3,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<numAppearance(arr, n);
    return 0;
}
