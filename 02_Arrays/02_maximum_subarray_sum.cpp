// //Qs. Print Subarrays
// #include<iostream>
// using namespace std;
// void printsubArrays(int arr[], int n){
//     for(int start = 0; start<n; start++){
//          for(int end = start; end<n; end++){
//             // cout<<"("<<i<<","<<j<<")" ;
//             for(int i = start; i<=end; i++){
//                 cout<<arr[i];
//             }
//             cout<<", ";
//          }
//          cout<<endl;
//     }
    
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n = 5;
//     printsubArrays(arr, n);
//     return 0;
// }

// //Qs. Maximum subarray sum

#include<iostream>
#include<climits>
using namespace std;
int maxSubArray(int nums[], int size){
int currSum =0; int maxSum = INT_MIN;
for(int i = 0; i<size; i++){
    currSum += nums[i];
    maxSum = max(currSum,maxSum);

    if(currSum<0){
        currSum =0;
    }
}
return maxSum;
}

int main() {
    int nums[9] = {-2, 1, -3, 4, -1, 2, 1,-5, 4};
    int size = 9;
    cout<<maxSubArray(nums, size)<<endl;
    return 0;
}

