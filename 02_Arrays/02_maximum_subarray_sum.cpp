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
    int nums[9]={-2, 1, -3, 4, -1, 2, 1,-5, 4};
    int size = 9;
    cout<<maxSubArray(nums, size)<<endl;
    return 0;
}

