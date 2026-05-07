// //===============================Leetcode 217. Contains Duplicate=====================================

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool numAppearance(vector<int>&arr){
//     int n = arr.size();
//    sort(arr.begin() ,arr.end());
//  for(int i = 1; i<n; i++){
   
//     if(arr[i-1]==arr[i])
//     return true;
//  }
//  return false;
// }
// int main(){
//     vector<int>arr = {1,2,3,1};
//     // int n = sizeof(arr)/sizeof(int);
//     cout<<numAppearance(arr);
//     return 0;
// }
